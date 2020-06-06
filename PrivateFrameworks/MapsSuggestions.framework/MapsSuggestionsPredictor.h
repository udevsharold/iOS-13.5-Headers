/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsPredictor.h>

@protocol MapsSuggestionsPredictor <NSObject,MapsSuggestionsObject>
@optional
-(void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3;
-(void)capturePredictedTransportationMode:(int)arg1;
-(void)cancelCapturingAnalytics;

@required
-(BOOL)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3;
-(BOOL)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3;

@end


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, MapsSuggestionsSignalPackCache, NSString;

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;
	MapsSuggestionsSignalPackCache* _signalPackCache;
	int _tempPredictedTransportMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)sharedPredictor;
-(id)init;
-(void)dealloc;
-(void)_closeConnection;
-(NSString *)uniqueName;
-(void)_unscheduleCloseConnection;
-(BOOL)_openConnectionIfNecessary;
-(void)_scheduleCloseConnection;
-(void)_initCloseTimerIfNecessary;
-(BOOL)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeSignalPack:(id)arg1 forMapItem:(id)arg2 andEntry:(id)arg3 ;
-(void)_overrideTempPredictedTransportModeForCarPlay:(id)arg1 ;
-(BOOL)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3 ;
-(void)capturePredictedTransportationMode:(int)arg1 ;
-(void)cancelCapturingAnalytics;
@end

