/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSString, NSData, MSMessage, NSObject;

@interface CKRemoteItemForSending : NSObject <NSSecureCoding> {

	BOOL _previewIsFullyRealizedByChatKit;
	NSURL* _attachmentURL;
	NSString* _attachmentDescription;
	IOSurfaceRef _previewImage;
	NSURL* _appendedVideoURL;
	NSURL* _appendedBundleURL;
	NSURL* _appendedRichLinkURL;
	NSData* _appendedRichLinkData;
	MSMessage* _appendedMessage;
	CGImageBlockSetRef _blockSet;
	NSObject*<OS_dispatch_semaphore> _previewCreationSemaphore;

}

@property (assign,nonatomic) CGImageBlockSetRef blockSet;                                            //@synthesize blockSet=_blockSet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> previewCreationSemaphore;              //@synthesize previewCreationSemaphore=_previewCreationSemaphore - In the implementation block
@property (nonatomic,retain) NSURL * attachmentURL;                                                  //@synthesize attachmentURL=_attachmentURL - In the implementation block
@property (nonatomic,retain) NSString * attachmentDescription;                                       //@synthesize attachmentDescription=_attachmentDescription - In the implementation block
@property (assign,nonatomic) IOSurfaceRef previewImage;                                              //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) BOOL previewIsFullyRealizedByChatKit;                                   //@synthesize previewIsFullyRealizedByChatKit=_previewIsFullyRealizedByChatKit - In the implementation block
@property (nonatomic,retain) NSURL * appendedVideoURL;                                               //@synthesize appendedVideoURL=_appendedVideoURL - In the implementation block
@property (nonatomic,retain) NSURL * appendedBundleURL;                                              //@synthesize appendedBundleURL=_appendedBundleURL - In the implementation block
@property (nonatomic,retain) NSURL * appendedRichLinkURL;                                            //@synthesize appendedRichLinkURL=_appendedRichLinkURL - In the implementation block
@property (nonatomic,copy) NSData * appendedRichLinkData;                                            //@synthesize appendedRichLinkData=_appendedRichLinkData - In the implementation block
@property (nonatomic,copy) MSMessage * appendedMessage;                                              //@synthesize appendedMessage=_appendedMessage - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)hasAppendedVideo:(id)arg1 ;
+(id)previewQueue;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGImageBlockSetRef)blockSet;
-(IOSurfaceRef)previewImage;
-(NSURL *)attachmentURL;
-(void)setAttachmentURL:(NSURL *)arg1 ;
-(void)setPreviewImage:(IOSurfaceRef)arg1 ;
-(void)setAttachmentDescription:(NSString *)arg1 ;
-(NSString *)attachmentDescription;
-(void)_setPreviewUIImage:(id)arg1 ;
-(void)beginPreviewCreation;
-(id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 blockOnPreviewCreation:(BOOL)arg4 ;
-(void)setBlockSet:(CGImageBlockSetRef)arg1 ;
-(void)waitForPreviewGenerationIfNecessary;
-(id)initWithAttachmentURL:(id)arg1 description:(id)arg2 blockOnPreviewCreation:(BOOL)arg3 ;
-(id)initWithRichLinkWithURL:(id)arg1 data:(id)arg2 ;
-(id)initWithMSMessage:(id)arg1 ;
-(id)previewUIImage;
-(BOOL)previewIsFullyRealizedByChatKit;
-(void)setPreviewIsFullyRealizedByChatKit:(BOOL)arg1 ;
-(NSURL *)appendedVideoURL;
-(void)setAppendedVideoURL:(NSURL *)arg1 ;
-(NSURL *)appendedBundleURL;
-(void)setAppendedBundleURL:(NSURL *)arg1 ;
-(NSURL *)appendedRichLinkURL;
-(void)setAppendedRichLinkURL:(NSURL *)arg1 ;
-(NSData *)appendedRichLinkData;
-(void)setAppendedRichLinkData:(NSData *)arg1 ;
-(MSMessage *)appendedMessage;
-(void)setAppendedMessage:(MSMessage *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)previewCreationSemaphore;
-(void)setPreviewCreationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

