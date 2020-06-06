/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPAAutoSettings.h>
@class NSString;


@protocol IPAAutoSettings <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pending; 
@required
-(NSString *)identifier;
-(id)archiveDictionary;
-(BOOL)pending;
-(BOOL)applyArchiveDictionary:(id)arg1;

@end


@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL pending; 
+(id)pendingWithIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)archiveDictionary;
-(BOOL)pending;
-(BOOL)_applyArchiveDictionary:(id)arg1 ;
-(BOOL)applyArchiveDictionary:(id)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(BOOL)isEqualToAutoSettings:(id)arg1 ;
@end

