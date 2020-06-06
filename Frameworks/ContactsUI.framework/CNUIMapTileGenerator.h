/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler, CNSchedulerProvider;
@interface CNUIMapTileGenerator : NSObject {

	/*^block*/id _geocoderProvider;
	/*^block*/id _snapshotterProvider;
	id<CNScheduler> _workQueue;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,copy,readonly) id geocoderProvider;                                    //@synthesize geocoderProvider=_geocoderProvider - In the implementation block
@property (nonatomic,copy,readonly) id snapshotterProvider;                                 //@synthesize snapshotterProvider=_snapshotterProvider - In the implementation block
@property (nonatomic,copy,readonly) id<CNScheduler> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)defaultImage;
+(id)mapTileImagesForPlacemark:(id)arg1 snapshotterProvider:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)placemarkForAddress:(id)arg1 geocoderProvider:(/*^block*/id)arg2 scheduler:(id)arg3 ;
-(id)init;
-(id<CNScheduler>)workQueue;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithGeocoderProvider:(/*^block*/id)arg1 snapshotterProvider:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
-(id)tilesForAddress:(id)arg1 ;
-(id)geocoderProvider;
-(id)snapshotterProvider;
@end

