/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment {

	IKBadgeElement* _badge;
	IKColor* _tintColor;

}

@property (nonatomic,__weak,readonly) IKBadgeElement * badge;              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                          //@synthesize tintColor=_tintColor - In the implementation block
-(IKColor *)tintColor;
-(void)setTintColor:(IKColor *)arg1 ;
-(IKBadgeElement *)badge;
-(id)initWithBadgeElement:(id)arg1 ;
@end

