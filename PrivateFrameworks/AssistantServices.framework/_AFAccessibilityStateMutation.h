/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAccessibilityStateMutating.h>

@class AFAccessibilityState, NSString;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating> {

	AFAccessibilityState* _baseModel;
	long long _isVoiceOverTouchEnabled;
	long long _isVibrationDisabled;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsVoiceOverTouchEnabled : 1;
		unsigned hasIsVibrationDisabled : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setIsVoiceOverTouchEnabled:(long long)arg1 ;
-(void)setIsVibrationDisabled:(long long)arg1 ;
@end

