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
        checkDefangIPAddress(address: "255.100.50.0", expectedAddress: "255[.]100[.]50[.]0")
    }
    
    func testCase2() {
        checkDefangIPAddress(address: "1.1.1.1", expectedAddress: "1[.]1[.]1[.]1")
    }
    
    private func checkDefangIPAddress(address: String, expectedAddress: String) {
        // act
        let result = defangIPaddr(address)
        
        // assert
        XCTAssertEqual(result, expectedAddress)
    }
}
