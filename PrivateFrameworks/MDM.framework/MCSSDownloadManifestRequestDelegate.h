/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSDownloadManifestRequestDelegate.h>

@class SSDownloadManifestResponse, SSDownloadManifestRequest, NSString;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate <SSDownloadManifestRequestDelegate> {

	SSDownloadManifestResponse* _response;

}

@property (nonatomic,retain,readonly) SSDownloadManifestRequest * request; 
@property (assign,nonatomic) BOOL shouldHideUserPrompts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithURLRequest:(id)arg1 ;
-(void)downloadManifestRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end

