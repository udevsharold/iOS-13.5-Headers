/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSTextAttachmentCell.h>

@class NSTextAttachment, NSString;

@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {

	NSTextAttachment* _attachment;

}

@property (assign,nonatomic,__weak) NSTextAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(CGSize)cellSize;
-(CGPoint)cellBaselineOffset;
-(NSTextAttachment *)attachment;
-(id)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(id)initWithTextAttachment:(id)arg1 image:(id)arg2 ;
@end

