/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iAd/iAd-Structs.h>
@class NSString, NSMutableDictionary, NSObject;

@interface ADSoftLinking : NSObject {

	Class _MPMoviePlayerController;
	Class _MPMoviePlayerViewController;
	Class _MPNetworkPlayabilityMonitor;
	NSString* _MPMoviePlayerWillEnterFullscreenNotification;
	NSString* _MPMoviePlayerDidEnterFullscreenNotification;
	NSString* _MPMoviePlayerWillExitFullscreenNotification;
	NSString* _MPMoviePlayerDidExitFullscreenNotification;
	NSString* _MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;
	NSMutableDictionary* _loadedFrameworks;
	NSMutableDictionary* _boundSymbols;
	NSObject*<OS_dispatch_queue> _loadQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * loadedFrameworks;                                         //@synthesize loadedFrameworks=_loadedFrameworks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * boundSymbols;                                             //@synthesize boundSymbols=_boundSymbols - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> loadQueue;                                         //@synthesize loadQueue=_loadQueue - In the implementation block
@property (nonatomic,readonly) Class ABNewPersonViewController; 
@property (nonatomic,readonly) Class ABPeoplePickerNavigationController; 
@property (nonatomic,readonly) /*function pointer*/void* AudioFileOpenWithCallbacks; 
@property (nonatomic,readonly) /*function pointer*/void* AudioFileGetProperty; 
@property (nonatomic,readonly) Class AVPlayer; 
@property (nonatomic,readonly) Class AVPlayerItem; 
@property (nonatomic,readonly) Class AVPlayerLayer; 
@property (nonatomic,readonly) Class AVURLAsset; 
@property (nonatomic,readonly) NSString * AVPlayerItemDidPlayToEndTimeNotification; 
@property (nonatomic,readonly) NSString * AVPlayerItemFailedToPlayToEndTimeNotification; 
@property (nonatomic,readonly) NSString * AVPlayerItemFailedToPlayToEndTimeErrorKey; 
@property (nonatomic,readonly) NSString * AVPlayerItemPlaybackStalledNotification; 
@property (nonatomic,readonly) NSString * AVLayerVideoGravityResizeAspectFill; 
@property (nonatomic,readonly) NSString * AVLayerVideoGravityResizeAspect; 
@property (nonatomic,readonly) Class EKReminderViewController; 
@property (nonatomic,readonly) Class EKEventEditViewController; 
@property (nonatomic,readonly) Class MPMoviePlayerController;                                                  //@synthesize MPMoviePlayerController=_MPMoviePlayerController - In the implementation block
@property (nonatomic,readonly) Class MPMoviePlayerViewController;                                              //@synthesize MPMoviePlayerViewController=_MPMoviePlayerViewController - In the implementation block
@property (nonatomic,readonly) Class MPNetworkPlayabilityMonitor;                                              //@synthesize MPNetworkPlayabilityMonitor=_MPNetworkPlayabilityMonitor - In the implementation block
@property (nonatomic,readonly) NSString * MPMoviePlayerWillEnterFullscreenNotification;                        //@synthesize MPMoviePlayerWillEnterFullscreenNotification=_MPMoviePlayerWillEnterFullscreenNotification - In the implementation block
@property (nonatomic,readonly) NSString * MPMoviePlayerDidEnterFullscreenNotification;                         //@synthesize MPMoviePlayerDidEnterFullscreenNotification=_MPMoviePlayerDidEnterFullscreenNotification - In the implementation block
@property (nonatomic,readonly) NSString * MPMoviePlayerWillExitFullscreenNotification;                         //@synthesize MPMoviePlayerWillExitFullscreenNotification=_MPMoviePlayerWillExitFullscreenNotification - In the implementation block
@property (nonatomic,readonly) NSString * MPMoviePlayerDidExitFullscreenNotification;                          //@synthesize MPMoviePlayerDidExitFullscreenNotification=_MPMoviePlayerDidExitFullscreenNotification - In the implementation block
@property (nonatomic,readonly) NSString * MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;              //@synthesize MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification=_MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification - In the implementation block
@property (nonatomic,readonly) Class MFMailComposeViewController; 
@property (nonatomic,readonly) Class MFMessageComposeViewController; 
@property (nonatomic,readonly) Class PKPass; 
@property (nonatomic,readonly) Class PKPassLibrary; 
@property (nonatomic,readonly) Class PKAddPassesViewController; 
@property (nonatomic,readonly) Class PLStaticWallpaperImageViewController; 
@property (nonatomic,readonly) Class SKStoreProductViewController; 
@property (nonatomic,readonly) NSString * SKStoreProductParameterITunesItemIdentifier; 
@property (nonatomic,readonly) Class TLToneManager; 
@property (nonatomic,readonly) NSString * kToneTitleKey; 
@property (nonatomic,readonly) NSString * kToneGenreKey; 
@property (nonatomic,readonly) NSString * kToneDurationKey; 
@property (nonatomic,readonly) NSString * kToneArtistKey; 
@property (nonatomic,readonly) /*function pointer*/void* CVPixelBufferCreateWithIOSurface; 
@property (nonatomic,readonly) /*function pointer*/void* CVPixelBufferRelease; 
@property (nonatomic,readonly) /*function pointer*/void* VTImageRotationSessionCreate; 
@property (nonatomic,readonly) /*function pointer*/void* VTImageRotationSessionInvalidate; 
@property (nonatomic,readonly) /*function pointer*/void* VTImageRotationSessionRelease; 
@property (nonatomic,readonly) /*function pointer*/void* VTImageRotationSessionTransferImage; 
@property (nonatomic,readonly) CFStringRef kIOSurfaceWidth; 
@property (nonatomic,readonly) CFStringRef kIOSurfacePixelFormat; 
@property (nonatomic,readonly) CFStringRef kIOSurfaceIsGlobal; 
@property (nonatomic,readonly) CFStringRef kIOSurfaceBytesPerRow; 
@property (nonatomic,readonly) CFStringRef kIOSurfaceHeight; 
@property (nonatomic,readonly) CFStringRef kIOSurfaceAllocSize; 
@property (nonatomic,readonly) CFStringRef kIOSurfaceBytesPerElement; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceGetWidth; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceGetHeight; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceGetBytesPerRow; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceGetBaseAddress; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceGetAllocSize; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceCreate; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceLock; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceUnlock; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceCreateXPCObject; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceLookupFromXPCObject; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceIncrementUseCount; 
@property (nonatomic,readonly) /*function pointer*/void* IOSurfaceDecrementUseCount; 
+(id)sharedManager;
-(id)init;
-(Class)AVURLAsset;
-(Class)AVPlayer;
-(NSMutableDictionary *)loadedFrameworks;
-(void)_loadFrameworkIfNeeded:(id)arg1 ;
-(NSMutableDictionary *)boundSymbols;
-(void*)_pointerToSymbolWithName:(id)arg1 inFrameworkAtPath:(id)arg2 ;
-(Class)_classWithName:(id)arg1 inFrameworkAtPath:(id)arg2 ;
-(id)_stringWithName:(id)arg1 inFrameworkAtPath:(id)arg2 ;
-(Class)ABNewPersonViewController;
-(Class)ABPeoplePickerNavigationController;
-(/*function pointer*/void*)AudioFileGetProperty;
-(/*function pointer*/void*)AudioFileOpenWithCallbacks;
-(Class)AVPlayerItem;
-(Class)AVPlayerLayer;
-(NSString *)AVPlayerItemDidPlayToEndTimeNotification;
-(NSString *)AVPlayerItemFailedToPlayToEndTimeNotification;
-(NSString *)AVPlayerItemFailedToPlayToEndTimeErrorKey;
-(NSString *)AVPlayerItemPlaybackStalledNotification;
-(NSString *)AVLayerVideoGravityResizeAspectFill;
-(NSString *)AVLayerVideoGravityResizeAspect;
-(Class)EKEventEditViewController;
-(Class)EKReminderViewController;
-(Class)MFMailComposeViewController;
-(Class)MFMessageComposeViewController;
-(Class)PKPass;
-(Class)PKPassLibrary;
-(Class)PKAddPassesViewController;
-(Class)PLStaticWallpaperImageViewController;
-(Class)SKStoreProductViewController;
-(NSString *)SKStoreProductParameterITunesItemIdentifier;
-(Class)TLToneManager;
-(NSString *)kToneTitleKey;
-(NSString *)kToneGenreKey;
-(NSString *)kToneDurationKey;
-(NSString *)kToneArtistKey;
-(/*function pointer*/void*)CVPixelBufferCreateWithIOSurface;
-(/*function pointer*/void*)CVPixelBufferRelease;
-(/*function pointer*/void*)VTImageRotationSessionCreate;
-(/*function pointer*/void*)VTImageRotationSessionInvalidate;
-(/*function pointer*/void*)VTImageRotationSessionRelease;
-(/*function pointer*/void*)VTImageRotationSessionTransferImage;
-(CFStringRef)kIOSurfaceWidth;
-(CFStringRef)kIOSurfacePixelFormat;
-(CFStringRef)kIOSurfaceIsGlobal;
-(CFStringRef)kIOSurfaceBytesPerRow;
-(CFStringRef)kIOSurfaceHeight;
-(CFStringRef)kIOSurfaceAllocSize;
-(CFStringRef)kIOSurfaceBytesPerElement;
-(/*function pointer*/void*)IOSurfaceGetWidth;
-(/*function pointer*/void*)IOSurfaceGetHeight;
-(/*function pointer*/void*)IOSurfaceGetBytesPerRow;
-(/*function pointer*/void*)IOSurfaceGetBaseAddress;
-(/*function pointer*/void*)IOSurfaceGetAllocSize;
-(/*function pointer*/void*)IOSurfaceCreate;
-(/*function pointer*/void*)IOSurfaceLock;
-(/*function pointer*/void*)IOSurfaceUnlock;
-(/*function pointer*/void*)IOSurfaceCreateXPCObject;
-(/*function pointer*/void*)IOSurfaceLookupFromXPCObject;
-(/*function pointer*/void*)IOSurfaceIncrementUseCount;
-(/*function pointer*/void*)IOSurfaceDecrementUseCount;
-(Class)MPMoviePlayerController;
-(Class)MPMoviePlayerViewController;
-(Class)MPNetworkPlayabilityMonitor;
-(NSString *)MPMoviePlayerWillEnterFullscreenNotification;
-(NSString *)MPMoviePlayerDidEnterFullscreenNotification;
-(NSString *)MPMoviePlayerWillExitFullscreenNotification;
-(NSString *)MPMoviePlayerDidExitFullscreenNotification;
-(NSString *)MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;
-(NSObject*<OS_dispatch_queue>)loadQueue;
@end

