/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class CKImageData, NSURL, NSString, PHLivePhoto, UIImage;

@interface CKImageMediaObject : CKMediaObject {

	CKImageData* _imageData;
	CKImageData* _backgroundImageData;
	NSURL* _appendedBundleURL;
	CGSize _originalSize;
	NSString* _irisVideoPath;
	BOOL _isSticker;
	PHLivePhoto* _livePhoto;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) BOOL isSticker;                       //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) CKImageData * imageData; 
@property (nonatomic,retain) UIImage * thumbnail;                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) BOOL isIrisAsset; 
@property (nonatomic,readonly) PHLivePhoto * livePhoto;              //@synthesize livePhoto=_livePhoto - In the implementation block
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(Class)imageDataClass;
+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
-(id)location;
-(int)mediaType;
-(CGSize)originalSize;
-(CKImageData *)imageData;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(BOOL)isSticker;
-(id)previewItemTitle;
-(id)previewItemURL;
-(PHLivePhoto *)livePhoto;
-(void)export:(id)arg1 ;
-(BOOL)isIrisAsset;
-(id)calculateIrisVideoPath;
-(BOOL)canShareItem;
-(id)pasteboardItem;
-(BOOL)canExport;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(BOOL)validatePreviewFormat;
-(id)previewFilenameExtension;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)getIrisVideoPath;
-(id)_getIrisBundleLocation;
@end

