/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPValueTransformer.h>

@interface HAPJSONValueTransformer : HAPValueTransformer
+(void)initialize;
+(Class)expectedTransformedClassForFormat:(unsigned long long)arg1 ;
+(id)defaultJSONValueTransformer;
-(id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
@end

