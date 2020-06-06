/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL;

@interface GKSavedGame : NSObject <NSCopying> {

	NSString* _name;
	NSString* _deviceName;
	NSDate* _modificationDate;
	NSURL* _fileURL;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
@end

