; Identifier naming conventions

((identifier) @constructor
 (#match? @constructor "^[A-Z]"))

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_]*$"))

; Builtin functions

((call
  function: (identifier) @function.builtin)
 (#match?
   @function.builtin
   "^(CIDR|Date|DateTime|Duration|IPAddr|Size|Time|abort|arch|base64|base64_web|bitand|bitnot|bitor|bool|chdir|chmod|contains|contains|copyFile|cwd|debase64|dehex|delete|echo|env|envExists|fileLen|find|float|format|geteuid|getpid|getuid|hex|high|int|isDir|isFile|isLink|items|joinPath|keys|len|len|listDir|low|lower|mkdir|moveFile|osname|pad|program_args|program_name|program_path|quote|rand|readFile|remove|resolvePath|rmFile|run|sections|set|setEnv|sha256|sha512|shl|shr|slice|split|splitPath|strip|system|to_msec|to_sec|to_tmp_file|to_usec|uname|upper|values|writeFile|xor)$"))
