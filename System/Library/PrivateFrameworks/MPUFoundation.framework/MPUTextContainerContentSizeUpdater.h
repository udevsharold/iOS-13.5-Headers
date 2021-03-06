/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUTextContainer;
@class NSString;

@interface MPUTextContainerContentSizeUpdater : NSObject {

	id<MPUTextContainer> _textContainer;
	NSString* _lastSeenPreferredContentSizeCategory;

}

@property (nonatomic,retain) NSString * lastSeenPreferredContentSizeCategory;              //@synthesize lastSeenPreferredContentSizeCategory=_lastSeenPreferredContentSizeCategory - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTextContainer> textContainer;                    //@synthesize textContainer=_textContainer - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MPUTextContainer>)textContainer;
-(void)setTextContainer:(id<MPUTextContainer>)arg1 ;
-(void)setLastSeenPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)_preferredContentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)lastSeenPreferredContentSizeCategory;
-(void)_updateTextStyleFonts;
-(void)ensureTextStyleFontsMatchPreferredTextStyleFonts;
@end

