/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>

@interface INRelativeReferenceResolutionResult : INIntentResolutionResult
+(id)successWithResolvedValue:(long long)arg1 ;
+(id)confirmationRequiredWithValueToConfirm:(long long)arg1 ;
+(id)successWithResolvedRelativeReference:(long long)arg1 ;
+(id)confirmationRequiredWithRelativeReferenceToConfirm:(long long)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

