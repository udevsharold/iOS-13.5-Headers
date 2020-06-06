/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKCSVParser : NSObject
+(id)newlineCharacterSet;
+(id)commaCharacterSet;
+(id)quoteCharacterSet;
+(id)terminatingCharacterSet;
+(BOOL)newlineWithScanner:(id)arg1 ;
+(id)fieldWithScanner:(id)arg1 error:(out id*)arg2 ;
+(id)recordWithScanner:(id)arg1 error:(out id*)arg2 ;
+(id)parseCSV:(id)arg1 error:(out id*)arg2 ;
@end

