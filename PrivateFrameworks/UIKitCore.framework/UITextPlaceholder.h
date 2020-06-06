/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, _UITextPlaceholderAttachment;

@interface UITextPlaceholder : NSObject {

	NSArray* _rects;
	_UITextPlaceholderAttachment* _attachment;

}

@property (nonatomic,copy) NSArray * rects;                                          //@synthesize rects=_rects - In the implementation block
@property (nonatomic,retain) _UITextPlaceholderAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)init;
-(_UITextPlaceholderAttachment *)attachment;
-(void)setAttachment:(_UITextPlaceholderAttachment *)arg1 ;
-(NSArray *)rects;
-(void)setRects:(NSArray *)arg1 ;
@end

