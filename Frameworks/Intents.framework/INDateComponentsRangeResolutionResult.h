/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INDateComponentsRangeResolutionResultExport.h>

@class NSString;

@interface INDateComponentsRangeResolutionResult : INIntentResolutionResult <INDateComponentsRangeResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativeDateComponentsRanges:(id)arg2 ;
+(id)successWithResolvedDateComponentsRange:(id)arg1 ;
+(id)disambiguationWithDateComponentsRangesToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

