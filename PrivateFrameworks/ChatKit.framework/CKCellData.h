/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface CKCellData : NSObject {

	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;
	NSString* _identifer;

}

@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * identifer;              //@synthesize identifer=_identifer - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithImage:(id)arg1 withTitle:(id)arg2 withSubtitle:(id)arg3 ;
-(id)initWithImage:(id)arg1 withTitle:(id)arg2 ;
-(NSString *)identifer;
-(void)setIdentifer:(NSString *)arg1 ;
@end

