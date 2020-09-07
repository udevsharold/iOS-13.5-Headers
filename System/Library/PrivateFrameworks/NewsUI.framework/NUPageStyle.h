/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface NUPageStyle : NSObject {

	BOOL _hideToolbar;
	NSString* _title;
	UIImage* _titleImage;
	NSString* _nextButtonTitle;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                  //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,copy) NSString * nextButtonTitle;              //@synthesize nextButtonTitle=_nextButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL hideToolbar;                      //@synthesize hideToolbar=_hideToolbar - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTitleImage:(UIImage *)arg1 ;
-(UIImage *)titleImage;
-(BOOL)hideToolbar;
-(NSString *)nextButtonTitle;
-(void)setNextButtonTitle:(NSString *)arg1 ;
-(void)setHideToolbar:(BOOL)arg1 ;
@end
