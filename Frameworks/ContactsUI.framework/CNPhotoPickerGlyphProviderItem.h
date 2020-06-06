/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class UIView, NSString, UIColor;

@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem {

	UIView* _symbolImageView;
	NSString* _symbolImageName;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIView * symbolImageView;                //@synthesize symbolImageView=_symbolImageView - In the implementation block
@property (nonatomic,retain) NSString * symbolImageName;              //@synthesize symbolImageName=_symbolImageName - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                     //@synthesize tintColor=_tintColor - In the implementation block
+(id)thumbnailViewForImage:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(unsigned long long)imageType;
-(void)thumbnailViewWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTintColorIfNeeded:(id)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
-(id)initWithSymbolImageNamed:(id)arg1 ;
-(long long)scaleForImageNamed:(id)arg1 ;
-(id)imageForImageNamed:(id)arg1 withTintColor:(id)arg2 ;
-(UIView *)symbolImageView;
-(void)setSymbolImageView:(UIView *)arg1 ;
@end

