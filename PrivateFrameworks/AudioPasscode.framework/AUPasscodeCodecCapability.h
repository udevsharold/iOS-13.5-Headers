/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@class NSString, NSArray;

@interface AUPasscodeCodecCapability : NSObject {

	NSString* _algorithmName;
	NSArray* _supportedSampleRates;
	NSRange _numChannelRange;

}

@property (nonatomic,copy,readonly) NSString * algorithmName;               //@synthesize algorithmName=_algorithmName - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSampleRates;              //@synthesize supportedSampleRates=_supportedSampleRates - In the implementation block
@property (nonatomic,readonly) NSRange numChannelRange;                     //@synthesize numChannelRange=_numChannelRange - In the implementation block
-(id)init;
-(id)initWithAlgorithmName:(id)arg1 ;
-(NSString *)algorithmName;
-(NSArray *)supportedSampleRates;
-(NSRange)numChannelRange;
@end

