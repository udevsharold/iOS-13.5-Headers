/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfigurationManager;
@class FCFlintResourceManager, NUEmbedConfigurationOperationResult;

@interface NUEmbedConfigurationOperation : FCOperation {

	/*^block*/id _completion;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	FCFlintResourceManager* _flintResourceManager;
	NUEmbedConfigurationOperationResult* _result;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;                          //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) NUEmbedConfigurationOperationResult * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completion;                                                            //@synthesize completion=_completion - In the implementation block
-(NUEmbedConfigurationOperationResult *)result;
-(void)setResult:(NUEmbedConfigurationOperationResult *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(FCFlintResourceManager *)flintResourceManager;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

