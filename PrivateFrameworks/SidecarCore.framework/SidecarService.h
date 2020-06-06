/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SidecarDevice, NSString, NSArray;

@interface SidecarService : NSObject {

	SidecarDevice* _targetDevice;

}

@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) NSString * serviceExtension; 
@property (nonatomic,readonly) NSString * localizedItemName; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) NSArray * returnTypes; 
@property (nonatomic,readonly) NSArray * sendTypes; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * pasteboardTypes; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(id)name;
+(id)services;
+(id)returnTypes;
+(id)supportedPasteboardTypes;
+(id)allServices;
+(id)serviceWithName:(id)arg1 ;
+(id)extensionForIdentifier:(id)arg1 ;
+(long long)minimumRapportVersion;
+(id)serviceWithIdentifier:(id)arg1 ;
+(id)menuServices;
+(id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2 ;
+(id)allReturnTypes;
+(id)allMenuServices;
+(id)servicesForPasteboardTypes:(id)arg1 ;
+(id)allSendTypes;
-(id)init;
-(NSString *)name;
-(NSString *)localizedDescription;
-(BOOL)isEnabled;
-(id)initWithDevice:(id)arg1 ;
-(NSArray *)devices;
-(NSArray *)pasteboardTypes;
-(NSString *)serviceIdentifier;
-(NSArray *)returnTypes;
-(NSString *)serviceExtension;
-(NSString *)localizedItemName;
-(id)makeRequest;
-(id)mutableRequestMessage;
-(NSArray *)sendTypes;
-(id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3 ;
-(id)makeRequestToDevice:(id)arg1 ;
-(id)copyWithDevice:(id)arg1 ;
@end

