/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface CKChatEagerUploadController : NSObject {

	NSMutableDictionary* _identifierMap;
	NSMutableArray* _uploadUrls;
	NSMutableDictionary* _temporaryURLS;

}

@property (nonatomic,retain) NSMutableDictionary * identifierMap;              //@synthesize identifierMap=_identifierMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploadUrls;                      //@synthesize uploadUrls=_uploadUrls - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * temporaryURLS;              //@synthesize temporaryURLS=_temporaryURLS - In the implementation block
-(id)init;
-(void)cancelAll;
-(NSMutableDictionary *)identifierMap;
-(void)didSendComposition;
-(void)cancelIdentifier:(id)arg1 ;
-(void)uploadPayload:(id)arg1 identifier:(id)arg2 replace:(BOOL)arg3 ;
-(void)uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 ;
-(void)cancelURL:(id)arg1 ;
-(void)removeTemporaryURLForURL:(id)arg1 ;
-(void)_uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 ;
-(id)_newTransferForURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 ;
-(void)addURLToIdentifierMap:(id)arg1 forIdentifier:(id)arg2 ;
-(void)asyncCopyFileAtURL:(id)arg1 toDestinationURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIdentifierMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)uploadUrls;
-(void)setUploadUrls:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)temporaryURLS;
-(void)setTemporaryURLS:(NSMutableDictionary *)arg1 ;
@end

