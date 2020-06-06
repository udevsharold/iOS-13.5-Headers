/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <AudioPasscode/AUPasscodeCodecCapability.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding> {

	NSArray* _algorithmVersionNumbers;
	NSRange _frameSizeRange;
	NSRange _numFrameRepeatRange;
	NSRange _hpfCutOffFreqRange;

}

@property (nonatomic,readonly) NSRange frameSizeRange;                         //@synthesize frameSizeRange=_frameSizeRange - In the implementation block
@property (nonatomic,readonly) NSRange numFrameRepeatRange;                    //@synthesize numFrameRepeatRange=_numFrameRepeatRange - In the implementation block
@property (nonatomic,readonly) NSArray * algorithmVersionNumbers;              //@synthesize algorithmVersionNumbers=_algorithmVersionNumbers - In the implementation block
@property (nonatomic,readonly) NSRange hpfCutOffFreqRange;                     //@synthesize hpfCutOffFreqRange=_hpfCutOffFreqRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)frameSizeRange;
-(NSRange)numFrameRepeatRange;
-(NSArray *)algorithmVersionNumbers;
-(NSRange)hpfCutOffFreqRange;
@end

