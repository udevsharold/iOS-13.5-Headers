/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID, NSData, NSSet;

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateLastModified; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (assign,nonatomic) BOOL isMarkedAsDeleted; 
@property (nonatomic,retain) NSData * keyImageData; 
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,retain) NSData * serializedWorkflowData; 
@property (nonatomic,copy) NSString * shortcutDescription; 
@property (nonatomic,copy) NSString * shortcutName; 
@property (nonatomic,retain) NSSet * syncStates; 
+(id)fetchRequest;
@end

