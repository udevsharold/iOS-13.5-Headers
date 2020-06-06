/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFWebAttachmentSource.h>

@class NSURL, MFMimeBody, MFMimePart, NSData, MFLock, NSMutableDictionary, MFAttachmentManager;

@interface MFWebMessageDocument : MFWebAttachmentSource {

	unsigned _uniqueId;
	NSURL* _baseURL;
	MFMimeBody* _mimeBody;
	MFMimePart* _htmlPart;
	NSData* _htmlData;
	MFLock* _lock;
	NSMutableDictionary* _partsByURL;
	NSMutableDictionary* _partsByFilename;
	unsigned _preferredEncoding;
	BOOL _visuallyEmpty;
	MFAttachmentManager* _attachmentManager;

}

@property (getter=isVisuallyEmpty) BOOL visuallyEmpty;                             //@synthesize visuallyEmpty=_visuallyEmpty - In the implementation block
@property (readonly) NSURL * baseURL;                                              //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) MFMimeBody * mimeBody;                                        //@synthesize mimeBody=_mimeBody - In the implementation block
@property (readonly) MFMimePart * mimePart;                                        //@synthesize htmlPart=_htmlPart - In the implementation block
@property (readonly) NSData * htmlData;                                            //@synthesize htmlData=_htmlData - In the implementation block
@property (assign) unsigned preferredEncoding;                                     //@synthesize preferredEncoding=_preferredEncoding - In the implementation block
@property (nonatomic,retain) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
-(id)init;
-(NSURL *)baseURL;
-(id)fileWrapper;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(MFMimeBody *)mimeBody;
-(BOOL)isVisuallyEmpty;
-(NSData *)htmlData;
-(unsigned)preferredEncoding;
-(id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned)arg3 ;
-(void)setVisuallyEmpty:(BOOL)arg1 ;
-(id)initWithMimePart:(id)arg1 ;
-(MFMimePart *)mimePart;
-(MFAttachmentManager *)attachmentManager;
-(id)preferredCharacterSet;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(id)attachmentForURL:(id)arg1 ;
-(id)_initWithMimePart:(id)arg1 htmlData:(id)arg2 ;
-(id)mimePartForURL:(id)arg1 ;
-(id)initWithMimeBody:(id)arg1 ;
-(id)attachmentsInDocument;
@end

