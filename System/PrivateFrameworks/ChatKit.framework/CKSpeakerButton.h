/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CKSpeakerButton : UIButton {

	char _orientation;
	BOOL _speakerEnabled;
	BOOL _shouldShowText;

}

@property (assign,nonatomic) BOOL shouldShowText;                                      //@synthesize shouldShowText=_shouldShowText - In the implementation block
@property (assign,nonatomic) char orientation;                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isSpeakerEnabled,nonatomic) BOOL speakerEnabled;              //@synthesize speakerEnabled=_speakerEnabled - In the implementation block
+(id)speakerImageWithOrientation:(char)arg1 speakerEnabled:(BOOL)arg2 shouldShowText:(BOOL)arg3 ;
-(char)orientation;
-(void)setOrientation:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSpeakerEnabled:(BOOL)arg1 ;
-(BOOL)isSpeakerEnabled;
-(BOOL)shouldShowText;
-(void)setShouldShowText:(BOOL)arg1 ;
-(void)touchUpInside:(id)arg1 ;
-(void)updateSpeakerImage;
-(void)hideSpeakerText;
@end

