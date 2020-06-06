/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOTileSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _baseURL;
	NSMutableArray* _countryRegionWhitelists;
	NSMutableArray* _deviceSKUWhitelists;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	NSMutableArray* _supportedLanguages;
	NSMutableArray* _validVersions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _alternativeMultipathTCPPort;
	int _checksumType;
	unsigned _dataSet;
	int _requestStyle;
	int _scale;
	int _size;
	int _style;
	int _updateBehavior;
	BOOL _multiTileURLUsesStatusCodes;
	BOOL _supportsMultipathTCP;
	BOOL _useAuthProxy;
	struct {
		unsigned has_alternativeMultipathTCPPort : 1;
		unsigned has_checksumType : 1;
		unsigned has_dataSet : 1;
		unsigned has_requestStyle : 1;
		unsigned has_updateBehavior : 1;
		unsigned has_multiTileURLUsesStatusCodes : 1;
		unsigned has_supportsMultipathTCP : 1;
		unsigned has_useAuthProxy : 1;
		unsigned read_unknownFields : 1;
		unsigned read_baseURL : 1;
		unsigned read_countryRegionWhitelists : 1;
		unsigned read_deviceSKUWhitelists : 1;
		unsigned read_localizationURL : 1;
		unsigned read_multiTileURL : 1;
		unsigned read_supportedLanguages : 1;
		unsigned read_validVersions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_baseURL : 1;
		unsigned wrote_countryRegionWhitelists : 1;
		unsigned wrote_deviceSKUWhitelists : 1;
		unsigned wrote_localizationURL : 1;
		unsigned wrote_multiTileURL : 1;
		unsigned wrote_supportedLanguages : 1;
		unsigned wrote_validVersions : 1;
		unsigned wrote_alternativeMultipathTCPPort : 1;
		unsigned wrote_checksumType : 1;
		unsigned wrote_dataSet : 1;
		unsigned wrote_requestStyle : 1;
		unsigned wrote_scale : 1;
		unsigned wrote_size : 1;
		unsigned wrote_style : 1;
		unsigned wrote_updateBehavior : 1;
		unsigned wrote_multiTileURLUsesStatusCodes : 1;
		unsigned wrote_supportsMultipathTCP : 1;
		unsigned wrote_useAuthProxy : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL; 
@property (nonatomic,readonly) BOOL hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL; 
@property (assign,nonatomic) int style; 
@property (nonatomic,retain) NSMutableArray * validVersions; 
@property (assign,nonatomic) int scale; 
@property (assign,nonatomic) int size; 
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL; 
@property (nonatomic,retain) NSMutableArray * supportedLanguages; 
@property (assign,nonatomic) BOOL hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL multiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior; 
@property (nonatomic,retain) NSMutableArray * countryRegionWhitelists; 
@property (assign,nonatomic) BOOL hasChecksumType; 
@property (assign,nonatomic) int checksumType; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (assign,nonatomic) BOOL hasRequestStyle; 
@property (assign,nonatomic) int requestStyle; 
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy; 
@property (assign,nonatomic) BOOL hasSupportsMultipathTCP; 
@property (assign,nonatomic) BOOL supportsMultipathTCP; 
@property (assign,nonatomic) BOOL hasAlternativeMultipathTCPPort; 
@property (assign,nonatomic) unsigned alternativeMultipathTCPPort; 
@property (nonatomic,retain) NSMutableArray * deviceSKUWhitelists; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)validVersionType;
+(Class)supportedLanguageType;
+(Class)countryRegionWhitelistType;
+(Class)deviceSKUWhitelistType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)baseURL;
-(int)size;
-(id)dictionaryRepresentation;
-(int)scale;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setScale:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)useAuthProxy;
-(NSMutableArray *)supportedLanguages;
-(void)_readBaseURL;
-(void)_readMultiTileURL;
-(void)_readValidVersions;
-(void)_addNoFlagsValidVersion:(id)arg1 ;
-(void)_readLocalizationURL;
-(void)_readSupportedLanguages;
-(void)_addNoFlagsSupportedLanguage:(id)arg1 ;
-(void)_readCountryRegionWhitelists;
-(void)_addNoFlagsCountryRegionWhitelist:(id)arg1 ;
-(void)_readDeviceSKUWhitelists;
-(void)_addNoFlagsDeviceSKUWhitelist:(id)arg1 ;
-(NSString *)multiTileURL;
-(NSString *)localizationURL;
-(NSMutableArray *)deviceSKUWhitelists;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(unsigned long long)validVersionsCount;
-(void)clearValidVersions;
-(id)validVersionAtIndex:(unsigned long long)arg1 ;
-(void)addValidVersion:(id)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(unsigned long long)supportedLanguagesCount;
-(void)clearSupportedLanguages;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(unsigned long long)countryRegionWhitelistsCount;
-(void)clearCountryRegionWhitelists;
-(id)countryRegionWhitelistAtIndex:(unsigned long long)arg1 ;
-(void)addCountryRegionWhitelist:(id)arg1 ;
-(unsigned long long)deviceSKUWhitelistsCount;
-(void)clearDeviceSKUWhitelists;
-(id)deviceSKUWhitelistAtIndex:(unsigned long long)arg1 ;
-(void)addDeviceSKUWhitelist:(id)arg1 ;
-(NSMutableArray *)validVersions;
-(NSMutableArray *)countryRegionWhitelists;
-(BOOL)hasBaseURL;
-(BOOL)hasMultiTileURL;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setValidVersions:(NSMutableArray *)arg1 ;
-(id)scaleAsString:(int)arg1 ;
-(int)StringAsScale:(id)arg1 ;
-(id)sizeAsString:(int)arg1 ;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)hasLocalizationURL;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)multiTileURLUsesStatusCodes;
-(void)setMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(BOOL)hasMultiTileURLUsesStatusCodes;
-(int)updateBehavior;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(BOOL)hasUpdateBehavior;
-(id)updateBehaviorAsString:(int)arg1 ;
-(int)StringAsUpdateBehavior:(id)arg1 ;
-(void)setCountryRegionWhitelists:(NSMutableArray *)arg1 ;
-(int)checksumType;
-(void)setChecksumType:(int)arg1 ;
-(void)setHasChecksumType:(BOOL)arg1 ;
-(BOOL)hasChecksumType;
-(id)checksumTypeAsString:(int)arg1 ;
-(int)StringAsChecksumType:(id)arg1 ;
-(unsigned)dataSet;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(int)requestStyle;
-(void)setRequestStyle:(int)arg1 ;
-(void)setHasRequestStyle:(BOOL)arg1 ;
-(BOOL)hasRequestStyle;
-(id)requestStyleAsString:(int)arg1 ;
-(int)StringAsRequestStyle:(id)arg1 ;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(BOOL)hasUseAuthProxy;
-(BOOL)supportsMultipathTCP;
-(void)setSupportsMultipathTCP:(BOOL)arg1 ;
-(void)setHasSupportsMultipathTCP:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipathTCP;
-(unsigned)alternativeMultipathTCPPort;
-(void)setAlternativeMultipathTCPPort:(unsigned)arg1 ;
-(void)setHasAlternativeMultipathTCPPort:(BOOL)arg1 ;
-(BOOL)hasAlternativeMultipathTCPPort;
-(void)setDeviceSKUWhitelists:(NSMutableArray *)arg1 ;
@end

