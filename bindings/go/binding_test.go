package tree_sitter_vesti_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_vesti "github.com/e0328eric/vesti/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vesti.Language())
	if language == nil {
		t.Errorf("Error loading Vesti grammar")
	}
}
