/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUCoreMSUDelegate <NSObject>
@optional
-(void)msuBrainLoadProgress:(id)arg1;
-(void)msuBrainLoadStalled:(id)arg1;
-(void)msuBrainLoaded:(id)arg1;
-(void)msuBrainLoadFailed:(id)arg1;
-(void)msuSUDownloadPreflighted;
-(void)msuSUDownloadPreflightFailed:(id)arg1;
-(void)msuPrepareProgress:(id)arg1;
-(void)msuPrepared:(id)arg1;
-(void)msuPrepareFailed:(id)arg1;
-(void)msuSuspended;
-(void)msuSuspendFailed:(id)arg1;
-(void)msuResumed;
-(void)msuResumeFailed:(id)arg1;
-(void)msuApplied;
-(void)msuApplyFailed:(id)arg1;
-(void)msuRemoved;
-(void)msuRemoveFailed:(id)arg1;
-(void)msuAnomaly:(id)arg1;

@end

