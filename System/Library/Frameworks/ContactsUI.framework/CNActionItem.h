/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CNActionItem : NSObject {

	BOOL _disabled;
	NSString* _type;
	UIImage* _image;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
-(id)description;
-(NSString *)type;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 type:(id)arg2 ;
@end
