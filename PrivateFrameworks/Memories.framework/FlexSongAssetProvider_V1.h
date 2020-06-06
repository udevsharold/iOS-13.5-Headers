/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FlexSongAssetProviderProtocol.h>

@class NSString;

@interface FlexSongAssetProvider_V1 : NSObject <FlexSongAssetProviderProtocol> {

	NSString* _rootFolderPath;
	NSString* _audioFileExtension;

}

@property (nonatomic,retain) NSString * rootFolderPath;                  //@synthesize rootFolderPath=_rootFolderPath - In the implementation block
@property (nonatomic,retain) NSString * audioFileExtension;              //@synthesize audioFileExtension=_audioFileExtension - In the implementation block
-(NSString *)audioFileExtension;
-(void)setAudioFileExtension:(NSString *)arg1 ;
-(NSString *)rootFolderPath;
-(id)urlToRoot;
-(id)urlToAudioContainerForSegmentType:(unsigned long long)arg1 ;
-(id)urlToAudioForSegment:(id)arg1 ;
-(id)initWithFolderPath:(id)arg1 ;
-(void)setRootFolderPath:(NSString *)arg1 ;
@end

