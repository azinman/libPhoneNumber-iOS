//
//  NBAsYouTypeFormatter.h
//  libPhoneNumber
//
//  Created by ishtar on 13. 2. 25..
//

@import Foundation;

@interface NBAsYouTypeFormatter : NSObject

- (id)initWithRegionCode:(NSString*)regionCode;
- (id)initWithRegionCodeForTest:(NSString*)regionCode;
- (id)initWithRegionCode:(NSString*)regionCode bundle:(NSBundle *)bundle;
- (id)initWithRegionCodeForTest:(NSString*)regionCode bundle:(NSBundle *)bundle;

- (NSString*)inputDigit:(NSString*)nextChar;
- (NSString*)inputDigitAndRememberPosition:(NSString*)nextChar;

- (NSString*)removeLastDigit;
- (NSString*)removeLastDigitAndRememberPosition;

- (NSInteger)getRememberedPosition;
- (void)clear;

@end
