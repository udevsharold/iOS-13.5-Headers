/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSString, CPLResourceTransferTask, NSArray;

@interface PLCloudInMemoryDownloadTask : NSObject {

	NSMapTable* _taskIDsToCompletionHandlers;
	BOOL _completed;
	NSString* _resourceID;
	CPLResourceTransferTask* _transferTask;

}

@property (nonatomic,copy,readonly) NSString * resourceID;                        //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,retain) CPLResourceTransferTask * transferTask;              //@synthesize transferTask=_transferTask - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * taskIDs; 
-(BOOL)isCompleted;
-(NSArray *)taskIDs;
-(void)setTransferTask:(CPLResourceTransferTask *)arg1 ;
-(id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addClientWithTaskID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelClientWithTaskID:(id)arg1 ;
-(void)reportCompletionWithData:(id)arg1 error:(id)arg2 ;
-(NSString *)resourceID;
-(CPLResourceTransferTask *)transferTask;
@end

