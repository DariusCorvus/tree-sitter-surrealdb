-- && or AND
SELECT * FROM 10 AND 20 AND 30;
SELECT * FROM 10 && 20 && 30;

-- || or OR
SELECT * FROM 0 OR false OR 10;
SELECT * FROM 0 || OR false || 10;

-- ??
SELECT * FROM NULL ?? 0 ?? false ?? 10;

-- ?:
SELECT * FROM NULL ?: 0 ?: false ?: 10;

-- = OR IS
SELECT * FROM true = "true";
SELECT * FROM 10 = "10";
SELECT * FROM 10 = 10.00;
SELECT * FROM 10 = "10.3";
SELECT * FROM [1, 2, 3] = [1, 2, 3];
SELECT * FROM [1, 2, 3] = [1, 2, 3, 4];
SELECT * FROM { this: "object" } = { this: "object" };
SELECT * FROM { this: "object" } = { another: "object" };

SELECT * FROM true IS "true";
SELECT * FROM 10 IS "10";
SELECT * FROM 10 IS 10.00;
SELECT * FROM 10 IS "10.3";
SELECT * FROM [1, 2, 3] IS [1, 2, 3];
SELECT * FROM [1, 2, 3] IS [1, 2, 3, 4];
SELECT * FROM { this: "object" } IS { this: "object" };
SELECT * FROM { this: "object" } IS { another: "object" };

-- != OR IS NOT
SELECT * FROM 10 != "15";
SELECT * FROM 10 != "test";
SELECT * FROM [1, 2, 3] != [3, 4, 5];

SELECT * FROM 10 IS NOT "15";
SELECT * FROM 10 IS NOT "test";
SELECT * FROM [1, 2, 3] IS NOT [3, 4, 5];

-- ==
SELECT * FROM 10 == 10;
SELECT * FROM 10 == "10";
SELECT * FROM true == "true";

-- ?=
SELECT * FROM [10, 15, 20] ?= 10;

-- *=
SELECT * FROM [10, 10, 10] *= 10;

-- ~
SELECT * FROM "test text" ~ "Test";
SELECT * FROM "true" ~ true;
SELECT * FROM ["test", "thing"] ~ "test";

-- !~
SELECT * FROM "other text" !~ "test";
SELECT * FROM "test text" !~ "Test";

-- ?~
SELECT * FROM ["true", "test", "text"] ?~ true;
SELECT * FROM [1, 2, 3] ?~ "2";

-- *~
SELECT * FROM [1, 2, 3] ?~ "2";
SELECT * FROM [1, 2, 3] ?~ "2";


-- <
SELECT * FROM 10 < 15;

-- <=
SELECT * FROM 10 <= 15;

-- >
SELECT * FROM 15 > 10;

-- >=
SELECT * FROM 15 >= 10;

-- +
SELECT * FROM 10 + 10;
SELECT * FROM "test" + " " + "this";
SELECT * FROM 13h + 30m;
SELECT * FROM "2021-11-01" + 1w;

-- -
SELECT * FROM 20 - 10;
SELECT * FROM 2m - 1m;
SELECT * FROM "2021-11-01" - 1w;

-- * or x
SELECT * FROM 20 * 2;
SELECT * FROM 20 x 2;

-- / or ÷
SELECT * FROM 20 / 2;
SELECT * FROM 20 ÷ 2;

-- **
SELECT * FROM 20 ** 3;

-- CONTAINS or ∋
SELECT * FROM [10, 20, 30] CONTAINS 10;
SELECT * FROM "this is some text" CONTAINS "text";
SELECT * FROM {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
} CONTAINS (-0.118092, 51.509865);

SELECT * FROM [10, 20, 30] ∋ 10;
SELECT * FROM "this is some text" ∋ "text";
SELECT * FROM {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
} ∋ (-0.118092, 51.509865);

-- CONTAINSNOT or ∌
SELECT * FROM [10, 20, 30] CONTAINSNOT 15;
SELECT * FROM "this is some text" CONTAINSNOT "other";
SELECT * FROM {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
} CONTAINSNOT (-0.518092, 53.509865);

SELECT * FROM [10, 20, 30] ∌ 15;
SELECT * FROM "this is some text" ∌ "other";
SELECT * FROM {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
} ∌ (-0.518092, 53.509865);


-- CONTAINSALL or ⊇
SELECT * FROM [10, 20, 30] CONTAINSALL [10, 20, 10];
SELECT * FROM [10, 20, 30] ⊇ [10, 20, 10];

-- CONTAINSANY or ⊃
SELECT * FROM [10, 20, 30] CONTAINSANY [10, 15, 25];
SELECT * FROM [10, 20, 30] ⊃ [10, 15, 25];


-- CONTAINSNONE or ⊅
SELECT * FROM [10, 20, 30] CONTAINSNONE [15, 25, 35];
SELECT * FROM [10, 20, 30] ⊅ [15, 25, 35];

-- INSIDE or IN or ∈
SELECT * FROM 10 INSIDE [10, 20, 30];
SELECT * FROM "text" INSIDE "this is some text";
SELECT * FROM (-0.118092, 51.509865) INSIDE {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

SELECT * FROM 10 ∈ [10, 20, 30];
SELECT * FROM "text" ∈ "this is some text";
SELECT * FROM (-0.118092, 51.509865) ∈ {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

SELECT * FROM 10 IN [10, 20, 30];
SELECT * FROM "text" IN "this is some text";
SELECT * FROM (-0.118092, 51.509865) IN {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

-- NOTINSIDE or NOT IN or ∉
SELECT * FROM 15 NOTINSIDE [10, 20, 30];
SELECT * FROM "other" NOTINSIDE "this is some text";
SELECT * FROM (-0.518092, 53.509865) NOTINSIDE {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

SELECT * FROM 15 NOT IN [10, 20, 30];
SELECT * FROM "other" NOT IN "this is some text";
SELECT * FROM (-0.518092, 53.509865) NOT IN {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

SELECT * FROM 15 ∉ [10, 20, 30];
SELECT * FROM "other" ∉ "this is some text";
SELECT * FROM (-0.518092, 53.509865) ∉ {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

-- ALLINSIDE or ⊆
SELECT * FROM [10, 20, 10] ALLINSIDE [10, 20, 30];

SELECT * FROM [10, 20, 10] ⊆ [10, 20, 30];

-- ANYINSIDE or ⊂
SELECT * FROM [10, 15, 25] ANYINSIDE [10, 20, 30];
SELECT * FROM [10, 15, 25] ⊂ [10, 20, 30];

-- NONEINSIDE or ⊄
SELECT * FROM [15, 25, 35] NONEINSIDE [10, 20, 30];
SELECT * FROM [15, 25, 35] ⊄ [10, 20, 30];

-- OUTSIDE
SELECT * FROM (-0.518092, 53.509865) OUTSIDE {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
};

-- INTERSECTS
SELECT * FROM {
	type: "Polygon",
	coordinates: [[
		[-0.38314819, 51.37692386], [0.1785278, 51.37692386],
		[0.1785278, 51.61460570], [-0.38314819, 51.61460570],
		[-0.38314819, 51.37692386]
	]]
} INTERSECTS {
	type: "Polygon",
	coordinates: [[
		[-0.11123657, 51.53160074], [-0.16925811, 51.51921169],
		[-0.11466979, 51.48223813], [-0.07381439, 51.51322956],
		[-0.11123657, 51.53160074]
	]]
};
