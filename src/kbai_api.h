
#ifndef __KBAI_API__
#define __KBAI_API__

#include <Arduino.h>
#include <Wire.h>
const String classification_out[1000] = {"tench, Tinca tinca", "goldfish, Carassius auratus", "great white shark, white shark, man-eater, man-eating shark, Carcharodon carcharias", "tiger shark, Galeocerdo cuvieri", "hammerhead, hammerhead shark", "electric ray, crampfish, numbfish, torpedo", "stingray", "cock", "hen", "ostrich, Struthio camelus", "brambling, Fringilla montifringilla", "goldfinch, Carduelis carduelis", "house finch, linnet, Carpodacus mexicanus", "junco, snowbird", "indigo bunting, indigo finch, indigo bird, Passerina cyanea", "robin, American robin, Turdus migratorius", "bulbul", "jay", "magpie", "chickadee", "water ouzel, dipper", "kite", "bald eagle, American eagle, Haliaeetus leucocephalus", "vulture", "great grey owl, great gray owl, Strix nebulosa", "European fire salamander, Salamandra salamandra", "common newt, Triturus vulgaris", "eft", "spotted salamander, Ambystoma maculatum", "axolotl, mud puppy, Ambystoma mexicanum", "bullfrog, Rana catesbeiana", "tree frog, tree-frog", "tailed frog, bell toad, ribbed toad, tailed toad, Ascaphus trui", "loggerhead, loggerhead turtle, Caretta caretta", "leatherback turtle, leatherback, leathery turtle, Dermochelys coriacea", "mud turtle", "terrapin", "box turtle, box tortoise", "banded gecko", "common iguana, iguana, Iguana iguana", "American chameleon, anole, Anolis carolinensis", "whiptail, whiptail lizard", "agama", "frilled lizard, Chlamydosaurus kingi", "alligator lizard", "Gila monster, Heloderma suspectum", "green lizard, Lacerta viridis", "African chameleon, Chamaeleo chamaeleon", "Komodo dragon, Komodo lizard, dragon lizard, giant lizard, Varanus komodoensis", "African crocodile, Nile crocodile, Crocodylus niloticus", "American alligator, Alligator mississipiensis", "triceratops", "thunder snake, worm snake, Carphophis amoenus", "ringneck snake, ring-necked snake, ring snake", "hognose snake, puff adder, sand viper", "green snake, grass snake", "king snake, kingsnake", "garter snake, grass snake", "water snake", "vine snake", "night snake, Hypsiglena torquata", "boa constrictor, Constrictor constrictor", "rock python, rock snake, Python sebae", "Indian cobra, Naja naja", "green mamba", "sea snake", "horned viper, cerastes, sand viper, horned asp, Cerastes cornutus", "diamondback, diamondback rattlesnake, Crotalus adamanteus", "sidewinder, horned rattlesnake, Crotalus cerastes", "trilobite", "harvestman, daddy longlegs, Phalangium opilio", "scorpion", "black and gold garden spider, Argiope aurantia", "barn spider, Araneus cavaticus", "garden spider, Aranea diademata", "black widow, Latrodectus mactans", "tarantula", "wolf spider, hunting spider", "tick", "centipede", "black grouse", "ptarmigan", "ruffed grouse, partridge, Bonasa umbellus", "prairie chicken, prairie grouse, prairie fowl", "peacock", "quail", "partridge", "African grey, African gray, Psittacus erithacus", "macaw", "sulphur-crested cockatoo, Kakatoe galerita, Cacatua galerita", "lorikeet", "coucal", "bee eater", "hornbill", "hummingbird", "jacamar", "toucan", "drake", "red-breasted merganser, Mergus serrator", "goose", "black swan, Cygnus atratus", "tusker", "echidna, spiny anteater, anteater", "platypus, duckbill, duckbilled platypus, duck-billed platypus, Ornithorhynchus anatinus", "wallaby, brush kangaroo", "koala, koala bear, kangaroo bear, native bear, Phascolarctos cinereus", "wombat", "jellyfish", "sea anemone, anemone", "brain coral", "flatworm, platyhelminth", "nematode, nematode worm, roundworm", "conch", "snail", "slug", "sea slug, nudibranch", "chiton, coat-of-mail shell, sea cradle, polyplacophore", "chambered nautilus, pearly nautilus, nautilus", "Dungeness crab, Cancer magister", "rock crab, Cancer irroratus", "fiddler crab", "king crab, Alaska crab, Alaskan king crab, Alaska king crab, Paralithodes camtschatica", "American lobster, Northern lobster, Maine lobster, Homarus americanus", "spiny lobster, langouste, rock lobster, crawfish, crayfish, sea crawfish", "crayfish, crawfish, crawdad, crawdaddy", "hermit crab", "isopod", "white stork, Ciconia ciconia", "black stork, Ciconia nigra", "spoonbill", "flamingo", "little blue heron, Egretta caerulea", "American egret, great white heron, Egretta albus", "bittern", "crane", "limpkin, Aramus pictus", "European gallinule, Porphyrio porphyrio", "American coot, marsh hen, mud hen, water hen, Fulica americana", "bustard", "ruddy turnstone, Arenaria interpres", "red-backed sandpiper, dunlin, Erolia alpina", "redshank, Tringa totanus", "dowitcher", "oystercatcher, oyster catcher", "pelican", "king penguin, Aptenodytes patagonica", "albatross, mollymawk", "grey whale, gray whale, devilfish, Eschrichtius gibbosus, Eschrichtius robustus", "killer whale, killer, orca, grampus, sea wolf, Orcinus orca", "dugong, Dugong dugon", "sea lion", "Chihuahua", "Japanese spaniel", "Maltese dog, Maltese terrier, Maltese", "Pekinese, Pekingese, Peke", "Shih-Tzu", "Blenheim spaniel", "papillon", "toy terrier", "Rhodesian ridgeback", "Afghan hound, Afghan", "basset, basset hound", "beagle", "bloodhound, sleuthhound", "bluetick", "black-and-tan coonhound", "Walker hound, Walker foxhound", "English foxhound", "redbone", "borzoi, Russian wolfhound", "Irish wolfhound", "Italian greyhound", "whippet", "Ibizan hound, Ibizan Podenco", "Norwegian elkhound, elkhound", "otterhound, otter hound", "Saluki, gazelle hound", "Scottish deerhound, deerhound", "Weimaraner", "Staffordshire bullterrier, Staffordshire bull terrier", "American Staffordshire terrier, Staffordshire terrier, American pit bull terrier, pit bull terrier", "Bedlington terrier", "Border terrier", "Kerry blue terrier", "Irish terrier", "Norfolk terrier", "Norwich terrier", "Yorkshire terrier", "wire-haired fox terrier", "Lakeland terrier", "Sealyham terrier, Sealyham", "Airedale, Airedale terrier", "cairn, cairn terrier", "Australian terrier", "Dandie Dinmont, Dandie Dinmont terrier", "Boston bull, Boston terrier", "miniature schnauzer", "giant schnauzer", "standard schnauzer", "Scotch terrier, Scottish terrier, Scottie", "Tibetan terrier, chrysanthemum dog", "silky terrier, Sydney silky", "soft-coated wheaten terrier", "West Highland white terrier", "Lhasa, Lhasa apso", "flat-coated retriever", "curly-coated retriever", "golden retriever", "Labrador retriever", "Chesapeake Bay retriever", "German short-haired pointer", "vizsla, Hungarian pointer", "English setter", "Irish setter, red setter", "Gordon setter", "Brittany spaniel", "clumber, clumber spaniel", "English springer, English springer spaniel", "Welsh springer spaniel", "cocker spaniel, English cocker spaniel, cocker", "Sussex spaniel", "Irish water spaniel", "kuvasz", "schipperke", "groenendael", "malinois", "briard", "kelpie", "komondor", "Old English sheepdog, bobtail", "Shetland sheepdog, Shetland sheep dog, Shetland", "collie", "Border collie", "Bouvier des Flandres, Bouviers des Flandres", "Rottweiler", "German shepherd, German shepherd dog, German police dog, alsatian", "Doberman, Doberman pinscher", "miniature pinscher", "Greater Swiss Mountain dog", "Bernese mountain dog", "Appenzeller", "EntleBucher", "boxer", "bull mastiff", "Tibetan mastiff", "French bulldog", "Great Dane", "Saint Bernard, St Bernard", "Eskimo dog, husky", "malamute, malemute, Alaskan malamute", "Siberian husky", "dalmatian, coach dog, carriage dog", "affenpinscher, monkey pinscher, monkey dog", "basenji", "pug, pug-dog", "Leonberg", "Newfoundland, Newfoundland dog", "Great Pyrenees", "Samoyed, Samoyede", "Pomeranian", "chow, chow chow", "keeshond", "Brabancon griffon", "Pembroke, Pembroke Welsh corgi", "Cardigan, Cardigan Welsh corgi", "toy poodle", "miniature poodle", "standard poodle", "Mexican hairless", "timber wolf, grey wolf, gray wolf, Canis lupus", "white wolf, Arctic wolf, Canis lupus tundrarum", "red wolf, maned wolf, Canis rufus, Canis niger", "coyote, prairie wolf, brush wolf, Canis latrans", "dingo, warrigal, warragal, Canis dingo", "dhole, Cuon alpinus", "African hunting dog, hyena dog, Cape hunting dog, Lycaon pictus", "hyena, hyaena", "red fox, Vulpes vulpes", "kit fox, Vulpes macrotis", "Arctic fox, white fox, Alopex lagopus", "grey fox, gray fox, Urocyon cinereoargenteus", "tabby, tabby cat", "tiger cat", "Persian cat", "Siamese cat, Siamese", "Egyptian cat", "cougar, puma, catamount, mountain lion, painter, panther, Felis concolor", "lynx, catamount", "leopard, Panthera pardus", "snow leopard, ounce, Panthera uncia", "jaguar, panther, Panthera onca, Felis onca", "lion, king of beasts, Panthera leo", "tiger, Panthera tigris", "cheetah, chetah, Acinonyx jubatus", "brown bear, bruin, Ursus arctos", "American black bear, black bear, Ursus americanus, Euarctos americanus", "ice bear, polar bear, Ursus Maritimus, Thalarctos maritimus", "sloth bear, Melursus ursinus, Ursus ursinus", "mongoose", "meerkat, mierkat", "tiger beetle", "ladybug, ladybeetle, lady beetle, ladybird, ladybird beetle", "ground beetle, carabid beetle", "long-horned beetle, longicorn, longicorn beetle", "leaf beetle, chrysomelid", "dung beetle", "rhinoceros beetle", "weevil", "fly", "bee", "ant, emmet, pismire", "grasshopper, hopper", "cricket", "walking stick, walkingstick, stick insect", "cockroach, roach", "mantis, mantid", "cicada, cicala", "leafhopper", "lacewing, lacewing fly", "dragonfly, darning needle, devil's darning needle, sewing needle, snake feeder, snake doctor, mosquito hawk, skeeter hawk", "damselfly", "admiral", "ringlet, ringlet butterfly", "monarch, monarch butterfly, milkweed butterfly, Danaus plexippus", "cabbage butterfly", "sulphur butterfly, sulfur butterfly", "lycaenid, lycaenid butterfly", "starfish, sea star", "sea urchin", "sea cucumber, holothurian", "wood rabbit, cottontail, cottontail rabbit", "hare", "Angora, Angora rabbit", "hamster", "porcupine, hedgehog", "fox squirrel, eastern fox squirrel, Sciurus niger", "marmot", "beaver", "guinea pig, Cavia cobaya", "sorrel", "zebra", "hog, pig, grunter, squealer, Sus scrofa", "wild boar, boar, Sus scrofa", "warthog", "hippopotamus, hippo, river horse, Hippopotamus amphibius", "ox", "water buffalo, water ox, Asiatic buffalo, Bubalus bubalis", "bison", "ram, tup", "bighorn, bighorn sheep, cimarron, Rocky Mountain bighorn, Rocky Mountain sheep, Ovis canadensis", "ibex, Capra ibex", "hartebeest", "impala, Aepyceros melampus", "gazelle", "Arabian camel, dromedary, Camelus dromedarius", "llama", "weasel", "mink", "polecat, fitch, foulmart, foumart, Mustela putorius", "black-footed ferret, ferret, Mustela nigripes", "otter", "skunk, polecat, wood pussy", "badger", "armadillo", "three-toed sloth, ai, Bradypus tridactylus", "orangutan, orang, orangutang, Pongo pygmaeus", "gorilla, Gorilla gorilla", "chimpanzee, chimp, Pan troglodytes", "gibbon, Hylobates lar", "siamang, Hylobates syndactylus, Symphalangus syndactylus", "guenon, guenon monkey", "patas, hussar monkey, Erythrocebus patas", "baboon", "macaque", "langur", "colobus, colobus monkey", "proboscis monkey, Nasalis larvatus", "marmoset", "capuchin, ringtail, Cebus capucinus", "howler monkey, howler", "titi, titi monkey", "spider monkey, Ateles geoffroyi", "squirrel monkey, Saimiri sciureus", "Madagascar cat, ring-tailed lemur, Lemur catta", "indri, indris, Indri indri, Indri brevicaudatus", "Indian elephant, Elephas maximus", "African elephant, Loxodonta africana", "lesser panda, red panda, panda, bear cat, cat bear, Ailurus fulgens", "giant panda, panda, panda bear, coon bear, Ailuropoda melanoleuca", "barracouta, snoek", "eel", "coho, cohoe, coho salmon, blue jack, silver salmon, Oncorhynchus kisutch", "rock beauty, Holocanthus tricolor", "anemone fish", "sturgeon", "gar, garfish, garpike, billfish, Lepisosteus osseus", "lionfish", "puffer, pufferfish, blowfish, globefish", "abacus", "abaya", "academic gown, academic robe, judge's robe", "accordion, piano accordion, squeeze box", "acoustic guitar", "aircraft carrier, carrier, flattop, attack aircraft carrier", "airliner", "airship, dirigible", "altar", "ambulance", "amphibian, amphibious vehicle", "analog clock", "apiary, bee house", "apron", "ashcan, trash can, garbage can, wastebin, ash bin, ash-bin, ashbin, dustbin, trash barrel, trash bin", "assault rifle, assault gun", "backpack, back pack, knapsack, packsack, rucksack, haversack", "bakery, bakeshop, bakehouse", "balance beam, beam", "balloon", "ballpoint, ballpoint pen, ballpen, Biro", "Band Aid", "banjo", "bannister, banister, balustrade, balusters, handrail", "barbell", "barber chair", "barbershop", "barn", "barometer", "barrel, cask", "barrow, garden cart, lawn cart, wheelbarrow", "baseball", "basketball", "bassinet", "bassoon", "bathing cap, swimming cap", "bath towel", "bathtub, bathing tub, bath, tub", "beach wagon, station wagon, wagon, estate car, beach waggon, station waggon, waggon", "beacon, lighthouse, beacon light, pharos", "beaker", "bearskin, busby, shako", "beer bottle", "beer glass", "bell cote, bell cot", "bib", "bicycle-built-for-two, tandem bicycle, tandem", "bikini, two-piece", "binder, ring-binder", "binoculars, field glasses, opera glasses", "birdhouse", "boathouse", "bobsled, bobsleigh, bob", "bolo tie, bolo, bola tie, bola", "bonnet, poke bonnet", "bookcase", "bookshop, bookstore, bookstall", "bottlecap", "bow", "bow tie, bow-tie, bowtie", "brass, memorial tablet, plaque", "brassiere, bra, bandeau", "breakwater, groin, groyne, mole, bulwark, seawall, jetty", "breastplate, aegis, egis", "broom", "bucket, pail", "buckle", "bulletproof vest", "bullet train, bullet", "butcher shop, meat market", "cab, hack, taxi, taxicab", "caldron, cauldron", "candle, taper, wax light", "cannon", "canoe", "can opener, tin opener", "cardigan", "car mirror", "carousel, carrousel, merry-go-round, roundabout, whirligig", "carpenter's kit, tool kit", "carton", "car wheel", "cash machine, cash dispenser, automated teller machine, automatic teller machine, automated teller, automatic teller, ATM", "cassette", "cassette player", "castle", "catamaran", "CD player", "cello, violoncello", "cellular telephone, cellular phone, cellphone, cell, mobile phone", "chain", "chainlink fence", "chain mail, ring mail, mail, chain armor, chain armour, ring armor, ring armour", "chain saw, chainsaw", "chest", "chiffonier, commode", "chime, bell, gong", "china cabinet, china closet", "Christmas stocking", "church, church building", "cinema, movie theater, movie theatre, movie house, picture palace", "cleaver, meat cleaver, chopper", "cliff dwelling", "cloak", "clog, geta, patten, sabot", "cocktail shaker", "coffee mug", "coffeepot", "coil, spiral, volute, whorl, helix", "combination lock", "computer keyboard, keypad", "confectionery, confectionary, candy store", "container ship, containership, container vessel", "convertible", "corkscrew, bottle screw", "cornet, horn, trumpet, trump", "cowboy boot", "cowboy hat, ten-gallon hat", "cradle", "crane", "crash helmet", "crate", "crib, cot", "Crock Pot", "croquet ball", "crutch", "cuirass", "dam, dike, dyke", "desk", "desktop computer", "dial telephone, dial phone", "diaper, nappy, napkin", "digital clock", "digital watch", "dining table, board", "dishrag, dishcloth", "dishwasher, dish washer, dishwashing machine", "disk brake, disc brake", "dock, dockage, docking facility", "dogsled, dog sled, dog sleigh", "dome", "doormat, welcome mat", "drilling platform, offshore rig", "drum, membranophone, tympan", "drumstick", "dumbbell", "Dutch oven", "electric fan, blower", "electric guitar", "electric locomotive", "entertainment center", "envelope", "espresso maker", "face powder", "feather boa, boa", "file, file cabinet, filing cabinet", "fireboat", "fire engine, fire truck", "fire screen, fireguard", "flagpole, flagstaff", "flute, transverse flute", "folding chair", "football helmet", "forklift", "fountain", "fountain pen", "four-poster", "freight car", "French horn, horn", "frying pan, frypan, skillet", "fur coat", "garbage truck, dustcart", "gasmask, respirator, gas helmet", "gas pump, gasoline pump, petrol pump, island dispenser", "goblet", "go-kart", "golf ball", "golfcart, golf cart", "gondola", "gong, tam-tam", "gown", "grand piano, grand", "greenhouse, nursery, glasshouse", "grille, radiator grille", "grocery store, grocery, food market, market", "guillotine", "hair slide", "hair spray", "half track", "hammer", "hamper", "hand blower, blow dryer, blow drier, hair dryer, hair drier", "hand-held computer, hand-held microcomputer", "handkerchief, hankie, hanky, hankey", "hard disc, hard disk, fixed disk", "harmonica, mouth organ, harp, mouth harp", "harp", "harvester, reaper", "hatchet", "holster", "home theater, home theatre", "honeycomb", "hook, claw", "hoopskirt, crinoline", "horizontal bar, high bar", "horse cart, horse-cart", "hourglass", "iPod", "iron, smoothing iron", "jack-o'-lantern", "jean, blue jean, denim", "jeep, landrover", "jersey, T-shirt, tee shirt", "jigsaw puzzle", "jinrikisha, ricksha, rickshaw", "joystick", "kimono", "knee pad", "knot", "lab coat, laboratory coat", "ladle", "lampshade, lamp shade", "laptop, laptop computer", "lawn mower, mower", "lens cap, lens cover", "letter opener, paper knife, paperknife", "library", "lifeboat", "lighter, light, igniter, ignitor", "limousine, limo", "liner, ocean liner", "lipstick, lip rouge", "Loafer", "lotion", "loudspeaker, speaker, speaker unit, loudspeaker system, speaker system", "loupe, jeweler's loupe", "lumbermill, sawmill", "magnetic compass", "mailbag, postbag", "mailbox, letter box", "maillot", "maillot, tank suit", "manhole cover", "maraca", "marimba, xylophone", "mask", "matchstick", "maypole", "maze, labyrinth", "measuring cup", "medicine chest, medicine cabinet", "megalith, megalithic structure", "microphone, mike", "microwave, microwave oven", "military uniform", "milk can", "minibus", "miniskirt, mini", "minivan", "missile", "mitten", "mixing bowl", "mobile home, manufactured home", "Model T", "modem", "monastery", "monitor", "moped", "mortar", "mortarboard", "mosque", "mosquito net", "motor scooter, scooter", "mountain bike, all-terrain bike, off-roader", "mountain tent", "mouse, computer mouse", "mousetrap", "moving van", "muzzle", "nail", "neck brace", "necklace", "nipple", "notebook, notebook computer", "obelisk", "oboe, hautboy, hautbois", "ocarina, sweet potato", "odometer, hodometer, mileometer, milometer", "oil filter", "organ, pipe organ", "oscilloscope, scope, cathode-ray oscilloscope, CRO", "overskirt", "oxcart", "oxygen mask", "packet", "paddle, boat paddle", "paddlewheel, paddle wheel", "padlock", "paintbrush", "pajama, pyjama, pj's, jammies", "palace", "panpipe, pandean pipe, syrinx", "paper towel", "parachute, chute", "parallel bars, bars", "park bench", "parking meter", "passenger car, coach, carriage", "patio, terrace", "pay-phone, pay-station", "pedestal, plinth, footstall", "pencil box, pencil case", "pencil sharpener", "perfume, essence", "Petri dish", "photocopier", "pick, plectrum, plectron", "pickelhaube", "picket fence, paling", "pickup, pickup truck", "pier", "piggy bank, penny bank", "pill bottle", "pillow", "ping-pong ball", "pinwheel", "pirate, pirate ship", "pitcher, ewer", "plane, carpenter's plane, woodworking plane", "planetarium", "plastic bag", "plate rack", "plow, plough", "plunger, plumber's helper", "Polaroid camera, Polaroid Land camera", "pole", "police van, police wagon, paddy wagon, patrol wagon, wagon, black Maria", "poncho", "pool table, billiard table, snooker table", "pop bottle, soda bottle", "pot, flowerpot", "potter's wheel", "power drill", "prayer rug, prayer mat", "printer", "prison, prison house", "projectile, missile", "projector", "puck, hockey puck", "punching bag, punch bag, punching ball, punchball", "purse", "quill, quill pen", "quilt, comforter, comfort, puff", "racer, race car, racing car", "racket, racquet", "radiator", "radio, wireless", "radio telescope, radio reflector", "rain barrel", "recreational vehicle, RV, R.V.", "reel", "reflex camera", "refrigerator, icebox", "remote control, remote", "restaurant, eating house, eating place, eatery", "revolver, six-gun, six-shooter", "rifle", "rocking chair, rocker", "rotisserie", "rubber eraser, rubber, pencil eraser", "rugby ball", "rule, ruler", "running shoe", "safe", "safety pin", "saltshaker, salt shaker", "sandal", "sarong", "sax, saxophone", "scabbard", "scale, weighing machine", "school bus", "schooner", "scoreboard", "screen, CRT screen", "screw", "screwdriver", "seat belt, seatbelt", "sewing machine", "shield, buckler", "shoe shop, shoe-shop, shoe store", "shoji", "shopping basket", "shopping cart", "shovel", "shower cap", "shower curtain", "ski", "ski mask", "sleeping bag", "slide rule, slipstick", "sliding door", "slot, one-armed bandit", "snorkel", "snowmobile", "snowplow, snowplough", "soap dispenser", "soccer ball", "sock", "solar dish, solar collector, solar furnace", "sombrero", "soup bowl", "space bar", "space heater", "space shuttle", "spatula", "speedboat", "spider web, spider's web", "spindle", "sports car, sport car", "spotlight, spot", "stage", "steam locomotive", "steel arch bridge", "steel drum", "stethoscope", "stole", "stone wall", "stopwatch, stop watch", "stove", "strainer", "streetcar, tram, tramcar, trolley, trolley car", "stretcher", "studio couch, day bed", "stupa, tope", "submarine, pigboat, sub, U-boat", "suit, suit of clothes", "sundial", "sunglass", "sunglasses, dark glasses, shades", "sunscreen, sunblock, sun blocker", "suspension bridge", "swab, swob, mop", "sweatshirt", "swimming trunks, bathing trunks", "swing", "switch, electric switch, electrical switch", "syringe", "table lamp", "tank, army tank, armored combat vehicle, armoured combat vehicle", "tape player", "teapot", "teddy, teddy bear", "television, television system", "tennis ball", "thatch, thatched roof", "theater curtain, theatre curtain", "thimble", "thresher, thrasher, threshing machine", "throne", "tile roof", "toaster", "tobacco shop, tobacconist shop, tobacconist", "toilet seat", "torch", "totem pole", "tow truck, tow car, wrecker", "toyshop", "tractor", "trailer truck, tractor trailer, trucking rig, rig, articulated lorry, semi", "tray", "trench coat", "tricycle, trike, velocipede", "trimaran", "tripod", "triumphal arch", "trolleybus, trolley coach, trackless trolley", "trombone", "tub, vat", "turnstile", "typewriter keyboard", "umbrella", "unicycle, monocycle", "upright, upright piano", "vacuum, vacuum cleaner", "vase", "vault", "velvet", "vending machine", "vestment", "viaduct", "violin, fiddle", "volleyball", "waffle iron", "wall clock", "wallet, billfold, notecase, pocketbook", "wardrobe, closet, press", "warplane, military plane", "washbasin, handbasin, washbowl, lavabo, wash-hand basin", "washer, automatic washer, washing machine", "water bottle", "water jug", "water tower", "whiskey jug", "whistle", "wig", "window screen", "window shade", "Windsor tie", "wine bottle", "wing", "wok", "wooden spoon", "wool, woolen, woollen", "worm fence, snake fence, snake-rail fence, Virginia fence", "wreck", "yawl", "yurt", "web site, website, internet site, site", "comic book", "crossword puzzle, crossword", "street sign", "traffic light, traffic signal, stoplight", "book jacket, dust cover, dust jacket, dust wrapper", "menu", "plate", "guacamole", "consomme", "hot pot, hotpot", "trifle", "ice cream, icecream", "ice lolly, lolly, lollipop, popsicle", "French loaf", "bagel, beigel", "pretzel", "cheeseburger", "hotdog, hot dog, red hot", "mashed potato", "head cabbage", "broccoli", "cauliflower", "zucchini, courgette", "spaghetti squash", "acorn squash", "butternut squash", "cucumber, cuke", "artichoke, globe artichoke", "bell pepper", "cardoon", "mushroom", "Granny Smith", "strawberry", "orange", "lemon", "fig", "pineapple, ananas", "banana", "jackfruit, jak, jack", "custard apple", "pomegranate", "hay", "carbonara", "chocolate sauce, chocolate syrup", "dough", "meat loaf, meatloaf", "pizza, pizza pie", "potpie", "burrito", "red wine", "espresso", "cup", "eggnog", "alp", "bubble", "cliff, drop, drop-off", "coral reef", "geyser", "lakeside, lakeshore", "promontory, headland, head, foreland", "sandbar, sand bar", "seashore, coast, seacoast, sea-coast", "valley, vale", "volcano", "ballplayer, baseball player", "groom, bridegroom", "scuba diver", "rapeseed", "daisy", "yellow lady's slipper, yellow lady-slipper, Cypripedium calceolus, Cypripedium parviflorum", "corn", "acorn", "hip, rose hip, rosehip", "buckeye, horse chestnut, conker", "coral fungus", "agaric", "gyromitra", "stinkhorn, carrion fungus", "earthstar", "hen-of-the-woods, hen of the woods, Polyporus frondosus, Grifola frondosa", "bolete", "ear, spike, capitulum", "toilet tissue, toilet paper, bathroom tissue"};
void save_value_1(uint8_t value = 0 ) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(26);
  Wire1.write(value);
  Wire1.endTransmission();
  delay(10);
}
void save_value_2(uint8_t value = 0 ) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(27);
  Wire1.write(value);
  Wire1.endTransmission();
  delay(10);

}

int8_t setmode(int8_t modes) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(1);
  Wire1.endTransmission();
  delay(5);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  if(raw != modes ){
  	delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(1);
  Wire1.write(modes);
  Wire1.endTransmission();
  delay(5);
  raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  }
  return raw;
}
int8_t ___status() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(0);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
int16_t W() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(2);
  Wire1.endTransmission();
  delay(10);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x6E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
int16_t H() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(4);
  Wire1.endTransmission();
  delay(3);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x6E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
int16_t Class() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(6);
  Wire1.endTransmission();
  delay(3);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x6E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
uint8_t new_data_available() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(13);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);
  while (Wire1.available()) {
    raw = Wire1.read();
  }
  return raw;
}
uint8_t objectdetection(uint8_t* rawdata) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(100);
  Wire1.endTransmission();
  delay(3);
  Wire1.requestFrom(0x6E, 60);
  uint8_t coundata = 0;
  while (Wire1.available() != 60) {
    delay(3);
  }
  for (int i = 0; i < 6; i++) {
    rawdata[i] = Wire1.read();

    if ((i + 1) % 6 == 0 && rawdata[i] != 255) {
      coundata++;
    }

  }

  do{
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(13);
  Wire1.write(0);
  Wire1.endTransmission();
  delay(3);
  }while (new_data_available() != 0);

  return coundata;
}
uint8_t classification(uint8_t* rawdata) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(100);
  Wire1.endTransmission();
  delay(10);
  Wire1.requestFrom(0x6E, 30);
  uint8_t coundata = 0;
  while (Wire1.available()) {
    for (int i = 0; i < 30; i++) {
      rawdata[i] = Wire1.read();
      if ((i + 1) % 3 == 0 && rawdata[i] != 255) {
        coundata++;
      }
    }
  }
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(13);
  Wire1.write(0);
  Wire1.endTransmission();
  return coundata;
}
void regression(uint8_t* rawdata) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(100);
  Wire1.endTransmission();
  delay(3);
  Wire1.requestFrom(0x6E, 20);
  while (Wire1.available()) {
    for (int i = 0; i < 20; i++) {
      rawdata[i] = Wire1.read();
    }
  }
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(13);
  Wire1.write(0);
  Wire1.endTransmission();
}
uint8_t threshold(int8_t threshold) {
  if (threshold > 99 )
    threshold = 99;
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(10);
  Wire1.write(threshold);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t fps() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(11);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);
  while (Wire1.available()) {
    raw = Wire1.read();
  }
  return raw;
}
void save_img() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(12);
  Wire1.write(1);
  Wire1.endTransmission();

}


uint16_t num_img() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(15);
  Wire1.endTransmission();
  delay(3);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x6E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
int16_t num_mic() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(17);
  Wire1.endTransmission();
  delay(3);
  uint16_t raw = 0xffff;
  Wire1.requestFrom(0x6E, 2);
  while (Wire1.available()) {
    uint8_t h = Wire1.read();
    uint8_t l = Wire1.read();
    raw = (uint16_t)h << 8 | l ;
  }
  return raw;
}
void save_mic() {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(19);
  Wire1.write(1);
  Wire1.endTransmission();
  delay(3);

}
void face_recognition_save(uint8_t id = 0) {
  if (id < 0 )
    id = id;
  if (id > 255 )
    id = 255;
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(20);
  Wire1.write(id);
  Wire1.endTransmission();
  delay(3);
}
void face_recognition_del(uint8_t id = 0) {
  if (id < 0 )
    id = id;
  if (id > 255 )
    id = 255;
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(21);
  Wire1.write(id);
  Wire1.endTransmission();
  delay(3);

}
uint8_t face_recognition_threshold(int8_t threshold) {
  if (threshold > 99 )
    threshold = 99;
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(22);
  Wire1.write(threshold);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t vflip(uint8_t st) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(23);
  Wire1.write(st);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t hmirror(uint8_t st) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(24);
  Wire1.write(st);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
uint8_t lcd_rotation(uint8_t st) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(28);
  Wire1.write(st);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);    // request 6 bytes from slave device #8
  while (Wire1.available()) { // slave may send less than requested
    raw = Wire1.read(); // receive a byte as character
    //    Serial.println(c);         // print the character
  }
  return raw;
}
void save_data_collection(uint8_t fb =128,uint8_t lr = 128) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(29);
  Wire1.write(fb);
  Wire1.write(lr);
  Wire1.write(1);
  Wire1.endTransmission();
  
}

void lcdccc(uint8_t lcdc = 50) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(32);
  Wire1.write(lcdc);
  Wire1.endTransmission();
  
}

uint8_t focus(int8_t _focus) {
  if (_focus > 99 )
    _focus = 99;
 if (_focus < 0 )
    _focus = 0;
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(32);
  Wire1.write(_focus);
  Wire1.endTransmission();
  delay(3);
  uint8_t raw = 0xff;
  Wire1.requestFrom(0x6E, 1);   
  while (Wire1.available()) { 
    raw = Wire1.read(); 

  }
  return raw;
}

void write_register(uint8_t reg = 0, uint8_t val = 0) {
  delay(3);
  Wire1.beginTransmission(0x6E);
  Wire1.write(reg);
  Wire1.write(val);
  Wire1.endTransmission();

}
void write_register16(uint8_t reg = 0, uint16_t val = 0) {
  delay(5);
  byte myByteArray[2];
  memcpy(myByteArray, &val, 2);
  Wire1.beginTransmission(0x6E);
  Wire1.write(reg);
  Wire1.write(myByteArray[0]);
  Wire1.endTransmission();
  delay(5);
  Wire1.beginTransmission(0x6E);
  Wire1.write(reg+1);
  Wire1.write(myByteArray[1]);
  Wire1.endTransmission();
}
void image_size(uint16_t W = 224,uint16_t H = 224) {
  delay(5);
  uint8_t reg = 33;
  byte myByteArrayw[2];
  memcpy(myByteArrayw, &W, 2);
  Wire1.beginTransmission(0x6E);
  Wire1.write(reg);
  Wire1.write(myByteArrayw[0]);
  Wire1.write(myByteArrayw[1]);
  Wire1.endTransmission();
  delay(5);
  byte myByteArrayh[2];
  memcpy(myByteArrayh, &H, 2);
  Wire1.beginTransmission(0x6E);
  Wire1.write(reg+2);
  Wire1.write(myByteArrayh[0]);
  Wire1.write(myByteArrayh[1]);
  Wire1.endTransmission();

}
void set_model_outputs_yolo2(uint16_t W = 224,uint16_t H = 224,uint8_t CH = 1) {
	image_size(W,H);
	uint8_t reg = 37;
	uint8_t w = W/32;
	uint8_t h = H/32;
	uint8_t ch = 25+(CH*5);
	// if(W%32 == 0){
	// 	w = W/32;
	// }
	// if(H%32 == 0){
	// 	h = H/32;
	// }
	delay(5);
	Wire1.beginTransmission(0x6E);
    Wire1.write(reg);
    Wire1.write(w);
    Wire1.endTransmission();
    delay(5);
    Wire1.beginTransmission(0x6E);
    Wire1.write(reg+1);
    Wire1.write(h);
    Wire1.endTransmission();
    delay(5);
    Wire1.beginTransmission(0x6E);
    Wire1.write(reg+2);
    Wire1.write(ch);
    Wire1.endTransmission();
    delay(5);

}
void set_model_outputs_classification(uint16_t W = 224,uint16_t H = 224,uint8_t CH = 1) {
	image_size(W,H);
	uint8_t reg = 37;
	uint8_t w = 1;
	uint8_t h = 1;
	uint8_t ch = CH;
	delay(5);
	Wire1.beginTransmission(0x6E);
    Wire1.write(reg);
    Wire1.write(w);
    Wire1.endTransmission();
    delay(5);
    Wire1.beginTransmission(0x6E);
    Wire1.write(reg+1);
    Wire1.write(h);
    Wire1.endTransmission();
    delay(5);
    Wire1.beginTransmission(0x6E);
    Wire1.write(reg+2);
    Wire1.write(ch);
    Wire1.endTransmission();

}
void set_anchor_yolo2(float anchor1 = 0,float anchor2 = 0,float anchor3 = 0,float anchor4 = 0,float anchor5 = 0
					,float anchor6 = 0,float anchor7 = 0,float anchor8 = 0,float anchor9 = 0,float anchor10 = 0) {
	write_register16(40,anchor1*1000);
	write_register16(42,anchor2*1000);
	write_register16(44,anchor3*1000);
	write_register16(46,anchor4*1000);
	write_register16(48,anchor5*1000);
	write_register16(50,anchor6*1000);
	write_register16(52,anchor7*1000);
	write_register16(54,anchor8*1000);
	write_register16(56,anchor9*1000);
	write_register16(58,anchor10*1000);
}
void set_color_th(uint8_t color1_r =0,uint8_t color1_g =0,uint8_t color1_b =0,
				  uint8_t color2_r =0,uint8_t color2_g =0,uint8_t color2_b =0,
				  uint8_t color3_r =0,uint8_t color3_g =0,uint8_t color3_b =0
	) {
	write_register(62,color1_r);
	write_register(63,color1_g);
	write_register(64,color1_b);

	write_register(65,color2_r);
	write_register(66,color2_g);
	write_register(67,color2_b);

	write_register(68,color3_r);
	write_register(69,color3_g);
	write_register(70,color3_b);
}


#endif
