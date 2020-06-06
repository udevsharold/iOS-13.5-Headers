/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {

	NSProgress* _progressForCurrentAsset;
	PAImageConversionServiceClient* _imageConversionClient;
	PAVideoConversionServiceClient* _videoConversionClient;

}
+(id)workerWithLibrary:(id)arg1 ;
-(id)_predicateToFetchResourcesAwaitingProcessing;
-(id)imageConversionClient;
-(id)videoConversionClient;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

