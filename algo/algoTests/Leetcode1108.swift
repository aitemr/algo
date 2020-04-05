// 1108. Defanging an IP Address
// Given a valid (IPv4) IP address, return a defanged version of that IP address.
//
// A defanged IP address replaces every period "." with "[.]".
//
//
//
// Example 1:
//
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:
//
// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"
//
//
// Constraints:
//
// The given address is a valid IPv4 address.

import XCTest

class Leetcode1108: XCTestCase {
    // MARK: - Solution
    
    private func defangIPaddr(_ address: String) -> String {
        return address.replacingOccurrences(of: ".", with: "[.]")
    }
    
    // MARK: - Test Cases
    
    func testCase1() {
        checkDefangIPAddress(input: "255.100.50.0", expectedOutput: "255[.]100[.]50[.]0")
    }
    
    func testCase2() {
        checkDefangIPAddress(input: "1.1.1.1", expectedOutput: "1[.]1[.]1[.]1")
    }
    
    private func checkDefangIPAddress(input: String, expectedOutput: String) {
        // act
        let result = defangIPaddr(input)
        
        // assert
        XCTAssertEqual(result, expectedOutput)
    }
}
