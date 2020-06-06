/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, CACRecordedUserActionFlow;

@interface CACRecordedUserAction : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSDictionary* _targetAttributes;
	BOOL _canIgnoreFailure;
	id _object;
	CACRecordedUserActionFlow* _ownerFlow;

}

@property (readonly) BOOL isSpokenCommand; 
@property (readonly) BOOL isReplayableGesture; 
@property (readonly) BOOL canIgnoreFailure; 
@property (__weak) CACRecordedUserActionFlow * ownerFlow;              //@synthesize ownerFlow=_ownerFlow - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSpokenCommand:(id)arg1 ;
-(void)beginExecutingWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)plistDescription;
-(id)_derivedTargetAttributesFromSpokenCommand:(id)arg1 ;
-(BOOL)isSpokenCommand;
-(id)_dictionaryFromRect:(CGRect)arg1 ;
-(CGRect)_rectFromDictionary:(id)arg1 ;
-(id)_labeledElementsFromMatchingCriteria:(id)arg1 ;
-(id)spokenCommand;
-(BOOL)isReplayableGesture;
-(BOOL)canIgnoreFailure;
-(CACRecordedUserActionFlow *)ownerFlow;
-(void)setOwnerFlow:(CACRecordedUserActionFlow *)arg1 ;
@end

