/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXImageView.h>

@class UIImage;

@interface SXRepeatableImageView : SXImageView {

	UIImage* _repeatingImage;

}

@property (nonatomic,retain) UIImage * repeatingImage;              //@synthesize repeatingImage=_repeatingImage - In the implementation block
-(id)image;
-(void)setImage:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setRepeatingImage:(UIImage *)arg1 ;
-(UIImage *)repeatingImage;
@end

