// Given a non-empty array of integers, every element appears twice except for one. Find that single one.
//
// Note:
//
// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
//
// Example 1:
//
// Input: [2,2,1]
// Output: 1
// Example 2:
//
// Input: [4,1,2,1,2]
// Output: 4

import XCTest

class SingleNumber: XCTestCase {
    
    // MARK: - Solution
    
    private func singleNumber(_ nums: [Int]) -> Int {
        var items: [Int: Int] = [:]
        for number in nums {
            let count = 0
            if items[number] != nil {
                let updatedCount = items[number]!
                items[number] = updatedCount+1
            } else {
                items[number] = count+1
            }
        }
        
        for item in items where item.value == 1 {
            return item.key
        }
        
        return 0
    }
    
    // MARK: - Test Cases
    
    func testCase1() {
        checkSingleNumber(input: [2,2,1], expectedOutput: 1)
    }
    
    func testCase2() {
        checkSingleNumber(input: [4,1,2,1,2], expectedOutput: 4)
    }
  
    private func checkSingleNumber(input: [Int], expectedOutput: Int) {
        // act
        let result = singleNumber(input)
        
        // assert
        XCTAssertEqual(result, expectedOutput)
    }
}
