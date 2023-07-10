# Tree-sitter con4m

[Tree-sitter](https://tree-sitter.github.io/) grammar for [con4m](https://github.com/crashappsec/con4m)

# First Run

- This installs a small module that lets your parser be used from Node: `npm install --save nan`
- This installs the Tree-sitter CLI itself: `npm install --save-dev tree-sitter-cli`
- Ensure the generated binaries are part of your path `export PATH=$PATH:./node_modules/.bin`

# Generating and testing the parser

- `tree-sitter generate` will generate the C code required to parse con4m
- Try the parser out: `tree-sitter parse test_files/test1.con4m`
- See debug graph: `tree-sitter parse -D test_files/test1.con4m`

# Updating highlights

See

- https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md
