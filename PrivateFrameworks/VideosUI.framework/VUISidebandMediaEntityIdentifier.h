/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityIdentifierInternal.h>

@class NSManagedObjectID, VUIMediaEntityType, NSString;

@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {

	NSManagedObjectID* _managedObjectID;
	VUIMediaEntityType* _mediaEntityType;

}

@property (nonatomic,retain) NSManagedObjectID * managedObjectID;              //@synthesize managedObjectID=_managedObjectID - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;               //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectID *)managedObjectID;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2 ;
@end

