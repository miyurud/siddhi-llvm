# ANTLR TRANSLATOR
This is a guide to use our ANTLR translator for creating LLVM IR from Siddhi QL.

# installing ANTLR
In your linux terminal run the following commands.

cd /usr/local/lib
sudo curl -O https://www.antlr.org/download/antlr-4.7.2-complete.jar
export CLASSPATH=".:/usr/local/lib/antlr-4.7.2-complete.jar:$CLASSPATH"
alias antlr4='java -jar /usr/local/lib/antlr-4.7.2-complete.jar'
alias grun='java org.antlr.v4.gui.TestRig'

In an Ubuntu terminal window, change to your home directory. Edit the startup script .bashrc and add the following lines at the end of the script

## ANTLR 4
export ANTLR_HOME="$HOME/ANTLR-4.7.2"
export ANTLR_JAR="$ANTLR_HOME/antlr-4.7.2-complete.jar"
export CLASSPATH=".:$ANTLR_JAR:$CLASSPATH"
alias antlr4="java -jar $ANTLR_JAR"
alias grun="java org.antlr.v4.gui.TestRig"

To make your changes take effect immediately in your terminal, type the command "source .bashrc"

Any new terminal window that you open in the future will have the new CLASSPATH and the new aliases.

# Install developer tools
The Ubuntu distribution does not include developer tools such as the GNU gcc and g++ compilers and GNU make. See https://help.ubuntu.com/community/InstallingCompilers and follow its instructions:

sudo apt-get update
sudo apt-get upgrade
sudo apt-get install build-essential

Note: 
If you receive the error message “Temporary failure resolving us.archive.ubuntu.com”, the fix is to 
enter the following command:
"sudo dhclient -v-4"

and then try again.

# Install cmake
In the Ubuntu terminal window, enter the following command to install the cmake utility:
sudo apt-get install cmake

# Download and install the C++ runtime for ANTLR

Go to https://github.com/antlr/antlr4 and clone.
change to directory antlr4-master/runtime/Cpp.
Go to 
https://github.com/antlr/antlr4/tree/master/runtime/Cpp and see the instructions under “Compiling on Linux”.

After that Enter subdirectory antlr4-master/runtime/Cpp/run/usr/local/include. Type the following command to copy the directory containing the ANTLR header files to the standard system location: 

sudo cp -r antlr4-runtime /usr/local/include

Enter subdirectory antlr4-master/runtime/Cpp/run/usr/local/lib.
Type the following commands to copy the ANTLR libraries to the standard system location and make them available to programs:

sudo cp * /usr/local/lib
sudo ldconfig

now clone this repository and you can run the main file after specifiying include directory and library names in your favourite IDE.