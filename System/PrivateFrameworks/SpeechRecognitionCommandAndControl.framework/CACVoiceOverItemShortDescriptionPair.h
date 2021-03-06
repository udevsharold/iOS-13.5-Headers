/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CACVoiceOverDescribable;
@class NSString;

@interface CACVoiceOverItemShortDescriptionPair : NSObject {

	id<CACVoiceOverDescribable> _item;
	NSString* _shortDescription;

}

@property (nonatomic,retain) id<CACVoiceOverDescribable> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * shortDescription;                   //@synthesize shortDescription=_shortDescription - In the implementation block
-(id<CACVoiceOverDescribable>)item;
-(void)setItem:(id<CACVoiceOverDescribable>)arg1 ;
-(NSString *)shortDescription;
-(void)setShortDescription:(NSString *)arg1 ;
@end

