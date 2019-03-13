#include <stdlib.h>
#include <iostream>
#include <stdarg.h>


#include <jdbc/mysql_driver.h>
#include <jdbc/mysql_connection.h>

#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/resultset.h>
#include <jdbc/cppconn/statement.h>
#include <vector>

#include <json/json.h>

using namespace std;

class Mysql {
    sql::Driver *driver;
    sql::Connection *conn;
    sql::Statement *stmt;
    sql::ResultSet *res;

    void connect(string server, string user, string password, string database) {
        cout << "Trying to establish the connection" << endl;
        try {
            driver = get_driver_instance();
            conn = driver->connect(server, user, password);
            stmt = conn->createStatement();
            stmt->execute("USE" + database);
        }
        catch (sql::SQLException e) {
            cout << "# ERR: " << e.what();
            cout << " (MySQL error code: " << e.getErrorCode();

        }

    }

    std::vector<std::string> string_to_array(const char *arg, ...) {
        std::vector<std::string> arguments_array;
        va_list arguments;

        for (va_start(arguments, arg); arg != NULL; arg = va_arg(arguments, const char *)) {
            arguments_array.push_back(arg);
        }

        va_end(arguments);
    }


    bool insert(string json_text, string table_name, vector<std::string> variables) {
        string name_string = "";
        string value_string = "";

        for (vector<string>::size_type i = 0; i != variables.size(); i++) {
            Json::Value value;
            Json::Reader reader;
            bool parsing_success = reader.parse(json_text, value);
            if (parsing_success) {
                name_string = name_string + variables[i] + " , ";
                value_string = value_string + value[variables[i]].asString() + " , ";
            }

            name_string = name_string.substr(0, name_string.size() - 2);
            value_string = value_string.substr(0, name_string.size() - 2);
        }
        return stmt->execute("INSERT INTO " + table_name + "(" + name_string + ") VALUES (" + value_string + ")");
    }

    bool check_table_exists(string table_name) {
        return this->stmt->execute("SELECT * FROM " + table_name + "LIMIT 1");
    }

    bool create_table(string table_name, string attributes_with_type, string primary_key) {
        bool return_temp = false;
        if (!(this->check_table_exists(table_name))) {
            return_temp = this->stmt->execute(
                    "CREATE TABLE " + table_name + "(" + attributes_with_type + "PRIMARY KEY " + primary_key + ")");
        }
        return return_temp;
    }

    sql::ResultSet *select(string select_query) {
        return stmt->executeQuery(select_query);
    }
};


int main(void) {
    return EXIT_SUCCESS;
}