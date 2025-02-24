import XCTest
import SwiftTreeSitter
import TreeSitterVesti

final class TreeSitterVestiTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_vesti())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Vesti grammar")
    }
}
