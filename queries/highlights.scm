; Function calls

((call_expression
  function: (identifier) @function.builtin)
 (#match?
   @function.builtin
   "^(CIDR|Date|DateTime|Duration|IPAddr|Size|Time|abort|arch|base64|base64_web|bitand|bitnot|bitor|bool|chdir|chmod|contains|contains|copyFile|cwd|debase64|dehex|delete|echo|env|envExists|fileLen|find|float|format|geteuid|getpid|getuid|hex|high|int|isDir|isFile|isLink|items|joinPath|keys|len|len|listDir|low|lower|mkdir|moveFile|osname|pad|program_args|program_name|program_path|quote|rand|readFile|remove|resolvePath|rmFile|run|sections|set|setEnv|sha256|sha512|shl|shr|slice|split|splitPath|strip|system|to_msec|to_sec|to_tmp_file|to_usec|uname|upper|values|writeFile|xor)$"))


(call_expression
  function: (identifier) @function)


; Section definitions
(section
  section_type: (identifier) @type.definition
  section_name: (identifier) @field
)

(selector_expression
  operand: (_expression) @variable
  field: (field_identifier) @field)


; Function definitions

(function_declaration
  name: (identifier) @function)


; Identifiers

(base_type_spec) @type
(identifier) @variable

; Operators

[
  ":"
  "-"
  ":="
  "*"
  "/"
  "&&"
  "%"
  "+"
  "<"
  "<="
  "="
  "=="
  ">"
  ">="
  "||"
  "and"
  "or"
] @operator

; Keywords

[
  "else"
  "for"
  "func"
  "if"
  "from"
  "to"
  "var"
] @keyword

[
  "return"
] @keyword.return

; Literals

[
  (string_literal)
] @string

(escape_sequence) @escape

[
  (int_literal)
  (float_literal)
  (imaginary_literal)
] @number

[
  (true)
  (false)
] @constant.builtin

(comment) @comment
