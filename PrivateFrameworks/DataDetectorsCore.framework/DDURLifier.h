/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDURLifier : NSObject
+(id)urlMatchesForString:(id)arg1 ;
+(id)urlMatchesForString:(id)arg1 includingTel:(BOOL)arg2 ;
+(id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2 ;
+(id)urlMatchesForString:(id)arg1 usingScanner:(DDScannerRef)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6 ;
+(BOOL)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3 ;
+(BOOL)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2 ;
+(BOOL)urlIfyNode:(id)arg1 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned long long)arg3 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5 ;
@end

