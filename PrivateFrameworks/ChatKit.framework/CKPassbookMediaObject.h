/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject {

	PKPass* _pass;
	UIImage* _icon;

}

@property (nonatomic,retain) PKPass * pass;               //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) UIImage * icon;              //@synthesize icon=_icon - In the implementation block
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
-(id)title;
-(id)subtitle;
-(int)mediaType;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)shouldBeQuickLooked;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowViewer;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(PKPass *)pass;
-(BOOL)shouldShowDisclosure;
-(BOOL)_supportsPassbook;
-(id)passView;
-(void)setPass:(PKPass *)arg1 ;
@end

