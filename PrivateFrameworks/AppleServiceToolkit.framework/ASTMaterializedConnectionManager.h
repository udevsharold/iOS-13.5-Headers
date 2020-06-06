/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASTConnectionStatusDelegate.h>
#import <libobjc.A.dylib/ASTConnectionManager.h>

@protocol ASTConnectionManagerDelegate;
@class ASTIdentity, ASTNetworking, NSString;

@interface ASTMaterializedConnectionManager : NSObject <ASTConnectionStatusDelegate, ASTConnectionManager> {

	id<ASTConnectionManagerDelegate> _delegate;
	ASTIdentity* _identity;
	ASTNetworking* _networking;
	NSString* _sessionId;

}

@property (nonatomic,retain) ASTNetworking * networking;                                    //@synthesize networking=_networking - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                          //@synthesize sessionId=_sessionId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ASTConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ASTIdentity * identity;                                        //@synthesize identity=_identity - In the implementation block
-(id)init;
-(void)dealloc;
-(id<ASTConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id<ASTConnectionManagerDelegate>)arg1 ;
-(ASTIdentity *)identity;
-(void)setIdentity:(ASTIdentity *)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(ASTNetworking *)networking;
-(id)initWithSOCKSProxyServer:(id)arg1 port:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpected:(long long)arg4 ;
-(void)connection:(id)arg1 connectionStateChanged:(long long)arg2 ;
-(void)postSessionExistsForIdentities:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 allowsCellularAccess:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)postEnrollAllowingCellularAccess:(BOOL)arg1 ;
-(id)postRequest:(id)arg1 allowsCellularAccess:(BOOL)arg2 ;
-(BOOL)postAuthInfo:(id)arg1 allowsCellularAccess:(BOOL)arg2 ;
-(BOOL)postProfile:(id)arg1 allowsCellularAccess:(BOOL)arg2 ;
-(void)postSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 allowsCellularAccess:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)postTestResult:(id)arg1 allowsCellularAccess:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelAllTestResults;
-(void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 allowsCellularAccess:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setNetworking:(ASTNetworking *)arg1 ;
@end

