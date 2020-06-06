/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <PlatterKit/PLTitledPlatterView.h>
#import <libobjc.A.dylib/NCNotificationStaticContentAccepting.h>
#import <libobjc.A.dylib/NCAuxiliaryOptionsSupporting.h>

@class BSUIFontProvider, NCNotificationContentView, NCNotificationGrabberView, NCAuxiliaryOptionsView, NSString, NSArray, NSDate, NSTimeZone, UIButton, UIImage, UIView;

@interface NCNotificationShortLookView : PLTitledPlatterView <NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting> {

	BSUIFontProvider* _fontProvider;
	NCNotificationContentView* _notificationContentView;
	NCNotificationGrabberView* _grabberView;
	NCAuxiliaryOptionsView* _auxiliaryOptionsView;
	BOOL _notificationContentViewHidden;
	BOOL _banner;
	BOOL _grabberVisible;

}

@property (assign,setter=_setGrabberVisible:,getter=_isGrabberVisible,nonatomic) BOOL grabberVisible; 
@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider; 
@property (getter=_notificationContentView,nonatomic,readonly) NCNotificationContentView * notificationContentView; 
@property (assign,setter=_setBanner:,getter=_isBanner,nonatomic) BOOL banner;                                                    //@synthesize banner=_banner - In the implementation block
@property (assign,setter=_setGrabberVisible:,getter=_isGrabberVisible,nonatomic) BOOL grabberVisible;                            //@synthesize grabberVisible=_grabberVisible - In the implementation block
@property (assign,getter=isNotificationContentViewHidden,nonatomic) BOOL notificationContentViewHidden;                          //@synthesize notificationContentViewHidden=_notificationContentViewHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * primarySubtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (nonatomic,copy) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines; 
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setBackgroundView:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setInterfaceActions:(NSArray *)arg1 ;
-(NSArray *)interfaceActions;
-(BOOL)_isBanner;
-(void)setSummaryText:(NSString *)arg1 ;
-(NSString *)summaryText;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_fontProvider;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)_configureCustomContentView;
-(void)_setFontProvider:(id)arg1 ;
-(void)_configureHeaderContentView;
-(void)_setBanner:(BOOL)arg1 ;
-(void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1 ;
-(BOOL)isNotificationContentViewHidden;
-(void)setNotificationContentViewHidden:(BOOL)arg1 ;
-(void)_configureNotificationContentViewIfNecessary;
-(void)_layoutNotificationContentView;
-(unsigned long long)maximumNumberOfPrimaryTextLines;
-(unsigned long long)maximumNumberOfPrimaryLargeTextLines;
-(unsigned long long)maximumNumberOfSecondaryTextLines;
-(unsigned long long)maximumNumberOfSecondaryLargeTextLines;
-(id)_notificationContentView;
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(NSString *)arg1 ;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1 ;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1 ;
-(void)_layoutAuxiliaryOptionsView;
-(void)_layoutGrabber;
-(CGSize)_sizeThatFitsContentWithSize:(CGSize)arg1 withAuxiliaryOptionsViewVisible:(BOOL)arg2 ;
-(void)_configureAuxiliaryOptionsViewIfNecessary;
-(id)_newNotificationContentView;
-(BOOL)_isGrabberVisible;
-(void)_setGrabberVisible:(BOOL)arg1 ;
@end

